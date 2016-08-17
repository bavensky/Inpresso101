#include "CMMC_Blink.hpp"
CMMC_Blink blinker;

void setup() {
  blinker.init();
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  blinker.blink(50, LED_BUILTIN);
  blinker.detach();
}
