int led = 10;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  for (int x=0; x<3; x++){
    digitalWrite(led, HIGH);	
    delay(150);			
    digitalWrite(led, LOW);
    delay(150); // espera 100ms
  }
  delay(100);
  for (int x=0; x<3; x++) {
    digitalWrite(led, HIGH);
    delay(400);
    digitalWrite(led, LOW);
    delay(400);
  }
  delay(100); // espera 100ms para marcar o intervalo entre as letras
  for (int x=0; x<3; x++) {
    digitalWrite(led, HIGH);
    delay(150);
    digitalWrite(led, LOW);
    delay(150);
  }
  // espera 3 segundos antes de repetir o sinal de SOS
  delay(3000);
}
