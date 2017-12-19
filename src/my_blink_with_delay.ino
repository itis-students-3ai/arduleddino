const int LED_INIZIALE = 13;
const int LED_NUOVO = 7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_INIZIALE, OUTPUT);
  pinMode(LED_NUOVO, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_INIZIALE, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  digitalWrite(LED_INIZIALE, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second


  digitalWrite(LED_NUOVO, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_NUOVO, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
