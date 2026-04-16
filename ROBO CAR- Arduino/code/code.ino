#include <Arduino.h>

// Function declarations
void forward();
void back();
void left();
void right();
void forwardleft();
void forwardright();
void backright();
void backleft();
void Stop();

// Pin definitions
#define in1 6
#define in2 7
#define in3 8
#define in4 9
#define enA 5   // Motor A speed
#define enB 10  // Motor B speed

int command;
int pwm_speedA = 255;
int pwm_speedB = 120;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);

  Serial.begin(9600);
  Stop();
}

void loop() {
  if (Serial.available() > 0) {
    command = Serial.read();

    switch (command) {
      case 'F': forward(); break;
      case 'B': back(); break;
      case 'L': left(); break;
      case 'R': right(); break;
      case 'G': forwardleft(); break;
      case 'I': forwardright(); break;
      case 'H': backleft(); break;
      case 'J': backright(); break;
      case 'S': Stop(); break;

      case '0': pwm_speedA = 100; break;
      case '1': pwm_speedA = 140; break;
      case '2': pwm_speedA = 153; break;
      case '3': pwm_speedA = 165; break;
      case '4': pwm_speedA = 178; break;
      case '5': pwm_speedA = 191; break;
      case '6': pwm_speedA = 204; break;
      case '7': pwm_speedA = 216; break;
      case '8': pwm_speedA = 229; break;
      case '9': pwm_speedA = 242; break;
      case 'q': pwm_speedA = 255; break;

      default: break;
    }
  }
}

void forward() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enA, pwm_speedA);
  analogWrite(enB, pwm_speedA);
}

void back() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enA, pwm_speedA);
  analogWrite(enB, pwm_speedA);
}

void left() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enA, pwm_speedA);
  analogWrite(enB, pwm_speedA);
}

void right() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enA, pwm_speedA);
  analogWrite(enB, pwm_speedA);
}

void forwardleft() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enA, pwm_speedB);
  analogWrite(enB, pwm_speedA);
}

void forwardright() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  analogWrite(enA, pwm_speedA);
  analogWrite(enB, pwm_speedB);
}

void backright() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enA, pwm_speedA);
  analogWrite(enB, pwm_speedB);
}

void backleft() {
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  analogWrite(enA, pwm_speedB);
  analogWrite(enB, pwm_speedA);
}

void Stop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  analogWrite(enA, 0);
  analogWrite(enB, 0);
}
