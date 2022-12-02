#define ESP32_RELAY_LED_BUILTIN 2
#define BUTTON_PIN_BY_PASS = 4

// variable for storing the pushbutton status 
int buttonState = 0;


void setup() {
    Serial.begin(115200);  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ESP32_RELAY_LED_BUILTIN, OUTPUT);
  pinMode(BUTTON_PIN_BY_PASS, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  // read the state of the pushbutton value
  buttonState = digitalRead(BUTTON_PIN_BY_PASS);
  // read the state of the pushbutton value
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH

      if (buttonState == HIGH) {
      // turn LED and RELAY on
      digitalWrite(BUTTON_PIN_BY_PASS, HIGH);
    } else {
      // turn LED and RELAY off
      digitalWrite(BUTTON_PIN_BY_PASS, LOW);
    }

// Following code is obmitted on 2-December by Muhammad Umer
  
//  digitalWrite(ESP32_RELAY_LED_BUILTIN, HIGH);   // turn the Relay on (HIGH is the voltage level)
//  delay(1000);                       // wait for a second
//  digitalWrite(ESP32_RELAY_LED_BUILTIN, LOW);    // turn the Relay off by making the voltage LOW
//  delay(1000);                       // wait for a second
}
