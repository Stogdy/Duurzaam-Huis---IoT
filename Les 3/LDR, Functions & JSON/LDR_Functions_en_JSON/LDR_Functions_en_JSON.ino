void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 int delayTime = random(100, 501);
int ldr_value = analogRead (A0);
if (ldr_value > 500) {



void setup() {
  
  pinMode(D3, OUTPUT);
  
  
  Serial.begin(9600);
}



}

void loop() {
  
  int delayTime = random(100, 501);  
  
  Serial.println(delayTime);

  digitalWrite(D3, HIGH);
  
  delay(delayTime);

  digitalWrite(D3, LOW);

  delay(delayTime);
}

