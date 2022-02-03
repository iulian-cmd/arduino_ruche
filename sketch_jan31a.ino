// declaration of all variables
const int PHOTOINTERUPTER = 11; // photointerrupter pin on 11
const int BUTTON = 6;
const int LED = 4;
const int BUZZER = 7;
int LDR = A0; // light dependent resistor

int frequency[7] = {262, 294, 330, 349, 392, 440, 494};
int indexNote = 0;
int numberIO = 0;
int t = 200;0
int threshold = 200;
bool day = true;

void setup()
{
  pinMode(PHOTOINTERUPTER, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LDR, INPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  Serial.println(digitalRead(PHOTOINTERUPTER));
  if (digitalRead(PHOTOINTERUPTER) == LOW && day)
  {
    while(digitalRead(PHOTOINTERUPTER) == LOW);
    digitalWrite(LED, HIGH);
    delay(t);
    digitalWrite(LED, LOW);
    tone(BUZZER, frequency[indexNote], t);
    // numberIO++;
    Serial.print("\nBees: ");
    Serial.print(numberIO++);
  }
  Serial.println(digitalRead(BUTTON));
  if (digitalRead(BUTTON) == LOW)
  {
    while(digitalRead(BUTTON) == LOW);
    delay(200);
    indexNote = (indexNote + 1) % 7;
    Serial.print("\nFrequency: ");
    Serial.print(indexNote);
  }
  if (analogRead(LDR) < threshold)
  {
    day = false;
  }
  else
  {
    day = true;
  }
}