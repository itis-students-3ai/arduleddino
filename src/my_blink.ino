

const int LED_INTEGRATO = 13;
const int LED_NUOVO = 7;

int led1_stato;
int led2_stato;
int led1_accensione;
int led2_accensione;
int led1_spegnimento;
int led2_spegnimento;

int time;

const int LED1_INTERVAL = 500;
const int LED2_INTERVAL = 2000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_INTEGRATO, OUTPUT);
  pinMode(LED_NUOVO, OUTPUT);
  
  time=millis();
  led1_accensione=millis();
  led1_spegnimento=millis();
  led2_accensione=millis();
  led2_spegnimento=millis();

  led1_stato = 0;
  led2_stato = 0;
}

// the loop function runs over and over again forever
void loop() {
  time = millis();

  if (time>led1_accensione+LED1_INTERVAL) {
    if (led1_stato == 0) {
      digitalWrite(LED_INTEGRATO, HIGH);   // turn the LED on (HIGH is the voltage level)
      led1_spegnimento=millis();
      led1_stato=1;
    }
  }

  if (time>led1_spegnimento+LED1_INTERVAL) {
    if (led1_stato == 1) {
      digitalWrite(LED_INTEGRATO, LOW);   // turn the LED on (HIGH is the voltage level)
      led1_accensione=millis();
      led1_stato=0;
    }
  }

  if (time>led2_accensione+LED2_INTERVAL) {
    if (led2_stato == 0) {
      digitalWrite(LED_NUOVO, HIGH);   // turn the LED on (HIGH is the voltage level)
      led2_spegnimento=millis();
      led2_stato=1;
    }
  }

  if (time>led2_spegnimento+LED2_INTERVAL) {
    if (led2_stato == 1) {
      digitalWrite(LED_NUOVO, LOW);   // turn the LED on (HIGH is the voltage level)
      led2_accensione=millis();
      led2_stato=0;
    }
  }
  
    
}
