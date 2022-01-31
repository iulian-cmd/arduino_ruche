// “Chaque passage allumera une led pendant 200 ms”
const int BUTTON = 2;
const int LED = 4;
int LEDflag = 0;                   // LED status flag
int value = analogRead(A0); 
int comptetours = 0;
const int fourchePin = 5;     //fourche pin5
int etatfourcheactuel = 0;
int etatfourcheprecedent = 0;

// variables will change:
int BUTTONstate = 0;             // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);           // set the digital pin as output:
  pinMode(BUTTON, INPUT);         // set the digital pin as input:
  pinMode(fourchePin, INPUT);  //en entrée
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
  Serial.println("Analog Value :");
  Serial.println(value);          // we write the value on the serial monitor
  delay(250);

  etatfourcheactuel = digitalRead(fourchePin);

    if (etatfourcheactuel =! etatfourcheprecedent)
    {
      if (etatfourcheactuel == HIGH)
      {
    comptetours++;
        Serial.println("Objet detecte"); 
          Serial.print("nombre tours:  ");
          Serial.println(comptetours, DEC); // affiche la valeur au format décimal
        } 
          else {
          // si le bouton courant est BAS
          // il est passé de HAUT à BAS :
          Serial.println("pas d'objet detecté");
        }

        //mémorise l'état 
        //pour les prochains passages dans la boucle loop
        etatfourcheprecedent = etatfourcheactuel;
      }
}            