/*
HC-SR04 Ping distance sensor
VCC to Arduino 5V
GND to Arduino GND
Echo to Arduino pin 13
Trig to Arduino pin 12
More info at: http://goo.gl/kJ8Gl
Original code improvements to the Ping sketch sourced from Trollmaker.com
Some code and wiring inspired by http://en.wikiversity.org/wiki/User:Dstaub/robotcar
Modified by Tolson Winters (Aug 27, 2014) for simplified serial monitor reading.
*/


#define trigPin1 14
#define echoPin1 15
#define trigPin2 10
#define echoPin2 16
#define trigPin3 2
#define echoPin3 3
#define trigPin4 8
#define echoPin4 9
#define przekaznik 5
#define SONAR_NUM 4
int i
void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
  pinMode(przekaznik, OUTPUT);
}

void loop() {
  for (int i=1; i<4; i++)
  
  long duration, distance);
  digitalWrite(trigPin(i), LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin(i), HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin(i), LOW);
  duration(i) = pulseIn(echoPin(i), HIGH);
  distance(i) = (duration(i)/2) / 29.1;
  
  if (distance(i) >= 400 || distance(i) <= 2){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance(i));
    Serial.println(" cm");
  }}
  delay(500);
}
