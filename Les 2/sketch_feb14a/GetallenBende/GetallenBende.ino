void setup() {
  // put your setup code here, to run once:
pinMode (D3, OUTPUT);
pinMode (D5, OUTPUT);
pinMode (D6, OUTPUT);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

int A = random(999);
int B = random(999);
int C = random(999);
int D = random(999);

Serial.println(A);
Serial.println(B);
Serial.println(C);
Serial.println(D);

if(A > B) {
  digitalWrite(D3, HIGH);
}
else if(A < C){
digitalWrite(D3, HIGH);
}

if(C > A) {
  digitalWrite(D5, HIGH);
}
else if(A < B){
digitalWrite(D5, HIGH);
}

if(B > C) {
  digitalWrite(D6, HIGH);
}
else if(B < A){
digitalWrite(D6, HIGH);
}
else if(C < A){
digitalWrite(D6, HIGH);
}
else if(D < A,B,C){
digitalWrite(D5, HIGH);
digitalWrite(D5, LOW);
digitalWrite(D5, HIGH);
digitalWrite(D5, LOW);
digitalWrite(D5, HIGH);
digitalWrite(D5, LOW);
digitalWrite(D5, HIGH);
digitalWrite(D5, LOW);
digitalWrite(D5, HIGH);
digitalWrite(D5, LOW);
digitalWrite(D5, HIGH);
digitalWrite(D5, LOW);
digitalWrite(D5, HIGH);
digitalWrite(D5, LOW);
}
delay(500);
}
