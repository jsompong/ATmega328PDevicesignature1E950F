/*
  ATmega328P Device signature = 1e950f = 1E950F
*/

int pushButton = 2;         // digital pin 2 has a pushbutton attached to it. Give it a name:

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);  // initialize digital pin LED_BUILTIN as an output.
  pinMode(7, OUTPUT);        pinMode(8, OUTPUT);          pinMode(9, OUTPUT);
  Serial.begin(9600);     // initialize serial communication at 9600 bits per second: 
  pinMode(pushButton, INPUT);         // make the pushbutton's pin an input:
}

void loop() {
  int buttonState = digitalRead(pushButton);        // read the input pin:
  Serial.println(buttonState);          // print out the state of the button:
  delay(1);        // delay in between reads for stability
  digitalWrite(LED_BUILTIN, HIGH);   delay(200);      digitalWrite(LED_BUILTIN, LOW);    delay(200);
  digitalWrite(7, HIGH);   delay(200);      digitalWrite(7, LOW);    delay(200);
  digitalWrite(8, HIGH);   delay(200);      digitalWrite(8, LOW);    delay(200);   
  digitalWrite(9, HIGH);   delay(200);      digitalWrite(9, LOW);    delay(200);
}
