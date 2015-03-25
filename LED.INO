
int LED = 13;

void setup() {
  
  pinMode(LED, OUTPUT); //DeclarO el pin 13 como salida
}


void loop() {
  digitalWrite(LED, HIGH);   //Enciende el Led
  delay(1000);              //Espera 1segundo 
  digitalWrite(LED, LOW);    //Apaga el Led
  delay(1000);              //espera 1segundo
}
