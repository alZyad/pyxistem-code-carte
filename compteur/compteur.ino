void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
  int i = 0;
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("\ncela fait ");
  Serial.print(i);
  Serial.print(" secondes que le programme a ete lance.\n");
  delay(1000);
  i = i + 1;
  
}