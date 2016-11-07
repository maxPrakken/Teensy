const int buttonPin0 = 14; 
const int buttonPin1 = 15; 
const int buttonPin2 = 16; 
const int buttonPin3 = 17; 
const int buttonPin4 = 2;

void setup() {
  // put your setup code here, to run once:
    pinMode(buttonPin0, INPUT);
    pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
    pinMode(buttonPin3, INPUT);
    pinMode(buttonPin4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
                           
  if(digitalRead(buttonPin0) == HIGH)
  {
    Keyboard.press(KEY_A);
  }
  else
  {
    Keyboard.release(KEY_A);
  }
  
  if(digitalRead(buttonPin1) == HIGH)
  {
    Keyboard.press(KEY_S);
  }
  else
  {
    Keyboard.release(KEY_S);
  }
  
  if(digitalRead(buttonPin2) == HIGH)
  {
    Keyboard.press(KEY_D);
  }
  else
  {
    Keyboard.release(KEY_D);
  }
  
  if(digitalRead(buttonPin3) == HIGH)
  {
    Keyboard.press(KEY_F);
  }
  else
  {
    Keyboard.release(KEY_F);
  }
  
  if(digitalRead(buttonPin4) == HIGH)
  {
    Keyboard.press(KEY_SPACE);
  }
  else
  {
    Keyboard.release(KEY_SPACE);
  }

  delay(16);
}
