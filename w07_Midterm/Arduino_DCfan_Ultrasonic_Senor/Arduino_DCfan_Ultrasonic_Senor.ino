/*
 HC-SR04 Ping distance sensor]
 VCC to arduino 5v GND to arduino GND
 Echo to Arduino pin 13 Trig to Arduino pin 12
 Red POS to Arduino pin 11
 Green POS to Arduino pin 10
 560 ohm resistor to both LED NEG and GRD power rail
 More info at: http://goo.gl/kJ8Gl
 Original code improvements to the Ping sketch sourced from Trollmaker.com
 Some code and wiring inspired by http://en.wikiversity.org/wiki/User:Dstaub/robotcar
 */

//This is the code that I had help on in a tutoring session. The trigpin acts as trigger that sends out signal that signifys the distance.
//The Echo Pin recieves the data for the distance and bounces a signal back to the ultrasonic sensor. 
//The DC fan is a Motor that is connected to a 12v battery pack.
//Refences and Learning Process
//Lynda.com: Control an Arduino DC Motor with a potentiometer
//Youtube: Paul McWhorter_Measure Distance with Arduino and Ultrasonic Sensor
//https://www.youtube.com/watch?v=rTM5gZxBPmY


#define trigPin 13
#define echoPin 11
#define fan 9


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(fan, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  // This is where the LED turns on and off
  // 30 cm away from the sensor
  if (distance < 30) {  
    digitalWrite(fan,HIGH); 
}
  else {
    digitalWrite(fan,LOW);
  }
  //This is testing the serial monitor
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
