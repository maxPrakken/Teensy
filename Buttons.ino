
//used to check if your fingers are toughing your palm

const int buttonPin0 = 14; 
const int buttonPin1 = 15; 
const int buttonPin2 = 16; 
const int buttonPin3 = 17; 

int buttonState = 0;         

void setup() {
   pinMode(buttonPin0, INPUT);
   pinMode(buttonPin1, INPUT);
   pinMode(buttonPin2, INPUT);
   pinMode(buttonPin3, INPUT);
}

void loop() {
  Serial.println(digitalRead(buttonPin0));
  delay(50);
  Serial.println(digitalRead(buttonPin1));
  delay(50);
  Serial.println(digitalRead(buttonPin2));
  delay(50);
  Serial.println(digitalRead(buttonPin3));
  delay(50);
}

