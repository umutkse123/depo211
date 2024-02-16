
#include "deneyap.h"
#include "servo.h"

#define servopin D0
#define buzzer D1
#define trigpin D13
#define echopin D14
Servo servoMotor;

void setup() { 
Serial.Begin(9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMODE(buzzerPin, OUTPUT);
servoMotor.attach(7);
}

void loop() {
  long mesafe= mesafeOku();
  if(mesafe > 0 && mesafe<30) {
    Serial.println(" HEDEF BULUNDU! ");
    digitalWrite(buzzerpin, HIGH);
    delay(1000);
    digitalWrite(buzzerpin, LOW);
    servoMotor.write(180);
    delay(600);
    servoMotor.write(0);
   }
   else { 
    servoMotor.write(0);
   }  
   delay(1000);
   }
   long mesafeOku();
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
  return pulseIn(echoPin, HIGH)
  0.034 / 2;
 }