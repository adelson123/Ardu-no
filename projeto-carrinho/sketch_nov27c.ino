int ena = 3;
int in1 = 5;
int in2 = 6;

void setup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}
void teste() {
  analogWrite(ena, 60);
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  delay(1000);

  analogWrite(ena, 140);
  digitalWrite(in1, 0);
  digitalWrite(in2, 0);
  delay(1000);

  analogWrite(ena, 220);
  digitalWrite(in1, 1);
  digitalWrite(in2, 0);
  delay(1000);

  analogWrite(ena, 140);
  digitalWrite(in1, 0);
  digitalWrite(in2, 0);
  delay(1000);
}

void loop() {
int contador=255;
for(int i = 40; i < contador; i = i + 10){
  analogWrite(ena, i);
  digitalWrite(in1, 0);
  digitalWrite(in2, 1);
  delay(3000);
}

}
