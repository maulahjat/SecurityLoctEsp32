#define ESP32_LED_BUILTIN 2

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ESP32_LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ESP32_LED_BUILTIN, HIGH);   // turn the Relay on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(ESP32_LED_BUILTIN, LOW);    // turn the Relay off by making the voltage LOW
  delay(1000);                       // wait for a second
}
