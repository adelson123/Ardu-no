int led_vermelho = 13;
int led_azul = 7;
int led_amarelo = 10;
int led_verde = 5;
void setup()
{
  pinMode(led_azul, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}
void loop(){
 
  digitalWrite(led_vermelho, 1);
  digitalWrite(led_verde, 0);
  digitalWrite(led_azul, 0);
  digitalWrite(led_amarelo, 0);
  delay(1000);
  
  digitalWrite(led_vermelho, 0);
  digitalWrite(led_verde, 1);
  digitalWrite(led_azul, 0);
  digitalWrite(led_amarelo, 0);
  delay(1000);

  digitalWrite(led_vermelho, 0);
  digitalWrite(led_verde, 0);
  digitalWrite(led_azul, 1);
  digitalWrite(led_amarelo, 0);
  delay(1000);
  
  digitalWrite(led_vermelho, 0);
  digitalWrite(led_verde, 0);
  digitalWrite(led_azul, 0);
  digitalWrite(led_amarelo, 1);
  delay(1000);
  
}
