
//button 
const int buttonPin0 = 14; 
const int buttonPin1 = 15; 
const int buttonPin2 = 16; 
const int buttonPin3 = 17; 
const int buttonPin4 = 2;
int buttonState = 0;

bool blinkState = false;

void setup() {

    //button instantiate             
    Serial.begin(19200);
    pinMode(buttonPin0, INPUT);
    pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
    pinMode(buttonPin3, INPUT);
    pinMode(buttonPin4, INPUT);

    pinMode(0, INPUT_PULLUP);
    pinMode(1, INPUT_PULLUP);
   
    Serial.begin(9600);
}

void loop() {

  //Serial.println("MIM");
    //================================================
    //button read
     if (digitalRead(buttonPin0) == HIGH) {
      Joystick.button(0,1);
      Serial.println("button 0 pushed");
     } else {
      Joystick.button(0,0);
     }
    
    if (digitalRead(buttonPin1) == HIGH) {
     Joystick.button(1,1);
     Serial.println("button 1 pushed");
    } else {
     Joystick.button(1,0);
    }
  
    if (digitalRead(buttonPin2) == HIGH) {
     Joystick.button(2,1);
     Serial.println("button 2 pushed");
      } else {
     Joystick.button(2,0);
    }
  
    if (digitalRead(buttonPin3) == HIGH) {
     Joystick.button(3,1);
     Serial.println("button 3 pushed");
   } else {
      Joystick.button(3,0);
    }

     if (digitalRead(buttonPin4) == HIGH) {
     Joystick.button(4,1);
     Serial.println("snare has been hit");
   } else {
      Joystick.button(4,0);
    }
    delay(16);
   //================================================
}
