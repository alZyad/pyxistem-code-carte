void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
  int secondes = 0;
  int minutes = 0;
  int secondes_restantes = 0; 
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("\ncela fait ");
  if(secondes < 60){
    Serial.print(secondes);
    Serial.print(" secondes que le programme a ete lance.\n");
  } else {
    minutes = secondes / 60;
    secondes_restantes = secondes - minutes * 60;
    Serial.print(minutes);
    Serial.print(" minutes et ");
    Serial.print(secondes_restantes);
    Serial.print(" secondes que le programme a ete lance.\n");
  }
  delay(1000);
  secondes = secondes + 1;
  
}
