#define ESP_RESET 2

void setup() {
  Serial.begin(115200);
  pinMode(ESP_RESET, INPUT);
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  delay(10000);

  pinMode(ESP_RESET, OUTPUT);
  Serial.println("ESP_RESET LOW");
  digitalWrite(ESP_RESET, LOW);
  
  delay(3000);
  
  pinMode(ESP_RESET, INPUT);
  Serial.println("ESP_RESET HIGH");
  digitalWrite(ESP_RESET, HIGH);
  
  Serial.println(digitalRead(ESP_RESET));
 
}
