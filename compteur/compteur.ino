#if defined(ESP32)
#define board_fqbn "esp32:esp32:esp32"
#elif defined(ARDUINO_ARDUINO_NANO33BLE)
#define board_fqbn "arduino:mbed_nano:nano33ble"
#else
#error "This board is not recognized"
#endif

void show_fqbn() {
  int command_size = 10;
  char command_char[command_size] = "";
  String command = "";
  int availableBytes = Serial.available();
  for(int i=0; i<min(availableBytes, command_size); i++)
  {
      command_char[i] = Serial.read();
      
  }
  command = String(command_char).substring(0,strlen(command_char)-1);
  if(command == "fqbn") {
    Serial.print("\n");
    Serial.print(board_fqbn);
    Serial.print("\n");

  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
  int secondes = 0;
  int minutes = 0;
  int secondes_restantes = 0; 
void loop() {
  // put your main code here, to run repeatedly:
  show_fqbn();
  Serial.print("\ncela fait ");
  if(secondes < 60){
    Serial.print(secondes);
    Serial.print(" secondes que le programme a ete lance !\n");
  } else {
    minutes = secondes / 60;
    secondes_restantes = secondes - minutes * 60;
    Serial.print(minutes);
    Serial.print(" minutes et ");
    Serial.print(secondes_restantes);
    Serial.print(" secondes que le programme a ete lance !\n");
  }
  delay(1000);
  secondes = secondes + 1;
  
}
