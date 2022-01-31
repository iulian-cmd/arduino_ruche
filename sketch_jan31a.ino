// “Chaque passage allumera une led pendant 200 ms”

const int BUTTON = 2;
const int LED = 4;
int LEDflag = 0;                   // LED status flag

// variables will change:
int BUTTONstate = 0;             // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);           // set the digital pin as output:
  pinMode(BUTTON, INPUT);         // set the digital pin as input:
  digitalWrite(LED, LOW);         // turn output off just in case
}

void loop() {
  if(digitalRead(BUTTON)==HIGH){  // if button is pressed
    if (LEDflag==0) {             // and the status flag is LOW
      LEDflag=1;                  // make status flag HIGH
      digitalWrite(LED,HIGH);     // and turn on the LED
      Serial.println("The LED is turned ON");
      }                           
    else {                        // otherwise...
      LEDflag=0;                  // make status flag LOW
      digitalWrite(LED,LOW);      // and turn off the LED
      Serial.println("The LED is turned OFF");
    }
  delay(1000);                    // wait a sec for the 
  }                               // hardware to stabilize
 }                                // begin again 