//CODE FOR ROBO CAR 
#define in1 6 
#define in2 7 
#define in3 8 
#define in4 9 
#define enA 5   // Right speed 
#define enB 10  // Left speed 
int command; // Store Bluetooth command 
int pwm_speedA = 255;  // Forward speed 
int pwm_speedB = 48;   // Turn speed 
void setup() { 
pinMode(in1, OUTPUT); 
pinMode(in2, OUTPUT);   
pinMode(enA, OUTPUT); 
pinMode(in3, OUTPUT); 
pinMode(in4, OUTPUT); 
pinMode(enB, OUTPUT); 
Serial.begin(9600);  // Bluetooth module baud rate 
} 
void loop() { 
if (Serial.available() > 0) { 
command = Serial.read(); 
Stop(); // Always initialize with motors stopped 
switch (command) { 
case 'F': forward(); break; 
      case 'B': back(); break; 
      case 'L': left(); break; 
      case 'R': right(); break; 
      case 'G': forwardleft(); break; 
      case 'I': forwardright(); break; 
      case 'H': backleft(); break; 
      case 'J': backright(); break; 
       
      // Speed controls 
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
    } 
  } 
} 
void forward() { 
  digitalWrite(in3, HIGH);   
  analogWrite(enB, pwm_speedA);  
   
  digitalWrite(in2, HIGH);   
  analogWrite(enA, pwm_speedA); 
} 
void back() { 
digitalWrite(in1, HIGH);   
analogWrite(enA, pwm_speedA);  
digitalWrite(in4, HIGH);   
analogWrite(enB, pwm_speedA); 
} 
void left() { 
digitalWrite(in3, HIGH); 
analogWrite(enB, pwm_speedA); 
digitalWrite(in1, HIGH); 
analogWrite(enA, pwm_speedA); 
} 
void right() { 
digitalWrite(in2, HIGH); 
analogWrite(enA, pwm_speedA); 
digitalWrite(in4, HIGH); 
analogWrite(enB, pwm_speedA); 
} 
void forwardleft() { 
digitalWrite(in3, HIGH);   
analogWrite(enB, pwm_speedA);  
digitalWrite(in2, HIGH);   
analogWrite(enA, pwm_speedB); 
} 
void forwardright() { 
digitalWrite(in3, HIGH);   
analogWrite(enB, pwm_speedB);  
digitalWrite(in2, HIGH);   
analogWrite(enA, pwm_speedA); 
} 
void backright() { 
digitalWrite(in1, HIGH); 
analogWrite(enA, pwm_speedA); 
digitalWrite(in4, HIGH); 
analogWrite(enB, pwm_speedB); 
} 
void backleft() { 
digitalWrite(in1, HIGH); 
analogWrite(enA, pwm_speedB); 
digitalWrite(in4, HIGH); 
analogWrite(enB, pwm_speedA); 
} 
void Stop() { 
analogWrite(in1, 0); 
analogWrite(in2, 0); 
analogWrite(in3, 0); 
analogWrite(in4, 0); 
} 