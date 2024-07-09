// Pin number where the LED is connected
const int ledPin = 13;

// Time interval in milliseconds
const unsigned long interval = 1000; // 1000 ms = 1 second

// Variable to store the previous time
unsigned long previousMillis = 0;

// LED state (HIGH or LOW)
int ledState = LOW;

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Get the current time
  unsigned long currentMillis = millis();

  // Check if it's time to blink the LED
  if (currentMillis - previousMillis >= interval) {
    // Save the last time you blinked the LED
    previousMillis = currentMillis;

    // If the LED is off, turn it on. If the LED is on, turn it off.
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // Write the LED state
    digitalWrite(ledPin, ledState);
  }
}
