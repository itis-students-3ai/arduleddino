const int LED1 = 9;

const int POT = A0;
int pot_value = 0;

const int MAX_LED_INTERVAL = 500;
int my_led_interval = MAX_LED_INTERVAL;

int t_led;
int current_millis;
int led_status = 0;

enum led_status_map = { LOW, HIGH };

// Do not touch this!
const int MAX_POT_VALUE = 1024;

void setup() {

  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(POT, INPUT);

  t_led = millis();
  led_status = 0;
}

int my_map_function(value) {
    /* My custom `map` implementation */
    return value*MAX_LED_INTERVAL/MAX_POT_VALUE;
}

void loop() {

    current_millis = millis();

    pot_value = analogRead(POT);
    Serial.println(pot_value);

    my_led_interval = my_map_function(pot_value);

    if (current_millis >= t_led + my_led_interval) { 
        led_status = !led_status;
    }

    digitalWrite(LED1, led_status_map[led_status]);
}
