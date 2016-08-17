#include "CMMC_Blink.hpp"
CMMC_Blink blinker;
const int sleepTimeS = 10; // 300 = 30นาที

void setup() {
  Serial.begin(115200);
  delay(200);
  
  blinker.init();
  pinMode(LED_BUILTIN, OUTPUT);
  blinker.blink(50, LED_BUILTIN);
  delay(5000);
  blinker.detach();
  ESP.deepSleep(sleepTimeS * 6000000);
}

void loop() {
}
