
// constants won't change. They're used here to
// set pin numbers:
 // the number of the pushbutton pin

// variables will change:

const int buttonPin0 = 14; 
const int buttonPin1 = 15; 
const int buttonPin2 = 16; 
const int buttonPin3 = 17; 

int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the pushbutton pin as an input:
   pinMode(buttonPin0, INPUT);
   pinMode(buttonPin1, INPUT);
   pinMode(buttonPin2, INPUT);
   pinMode(buttonPin3, INPUT);
}

void loop() {
  // read the state of the pushbutton value:

  Serial.println(digitalRead(buttonPin0));
  delay(50);
  Serial.println(digitalRead(buttonPin1));
  delay(50);
  Serial.println(digitalRead(buttonPin2));
  delay(50);
  Serial.println(digitalRead(buttonPin3));
  delay(50);
}
/*
#include<Wire.h>

const int MPU_addr=0x68;  // I2C address of the MPU-6050
int buttonState = 0;

int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;

const int buttonPin0 = 14; 
const int buttonPin1 = 15; 
const int buttonPin2 = 16; 
const int buttonPin3 = 17;

void setup(){
  pinMode(buttonPin0, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  Serial.begin(9600);
  
  Wire.begin();
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x6B);  // PWR_MGMT_1 register
  Wire.write(0);     // set to zero (wakes up the MPU-6050)
  Wire.endTransmission(true);
  Serial.begin(9600);
}
void loop(){
  Wire.beginTransmission(MPU_addr);
  Wire.write(0x3B);  // starting with register 0x3B (ACCEL_XOUT_H)
  Wire.endTransmission(false);
  Wire.requestFrom(MPU_addr,14,true);  // request a total of 14 registers
  AcX=Wire.read()<<8|Wire.read();  // 0x3B (ACCEL_XOUT_H) & 0x3C (ACCEL_XOUT_L)    
  AcY=Wire.read()<<8|Wire.read();  // 0x3D (ACCEL_YOUT_H) & 0x3E (ACCEL_YOUT_L)
  AcZ=Wire.read()<<8|Wire.read();  // 0x3F (ACCEL_ZOUT_H) & 0x40 (ACCEL_ZOUT_L)
  Tmp=Wire.read()<<8|Wire.read();  // 0x41 (TEMP_OUT_H) & 0x42 (TEMP_OUT_L)
  GyX=Wire.read()<<8|Wire.read();  // 0x43 (GYRO_XOUT_H) & 0x44 (GYRO_XOUT_L)
  GyY=Wire.read()<<8|Wire.read();  // 0x45 (GYRO_YOUT_H) & 0x46 (GYRO_YOUT_L)
  GyZ=Wire.read()<<8|Wire.read();  // 0x47 (GYRO_ZOUT_H) & 0x48 (GYRO_ZOUT_L)
  Serial.print("AcX = "); Serial.print(AcX);
  Serial.print(" | AcY = "); Serial.print(AcY);
  Serial.print(" | AcZ = "); Serial.print(AcZ);
  Serial.print(" | Tmp = "); Serial.print(Tmp/340.00+36.53);  //equation for temperature in degrees C from datasheet
  Serial.print(" | GyX = "); Serial.print(GyX);
  Serial.print(" | GyY = "); Serial.print(GyY);
  Serial.print(" | GyZ = "); Serial.println(GyZ);
  delay(333);
}*/
