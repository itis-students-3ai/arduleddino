const int POT = A0;
int pot_value = 0;


void setup() {

  Serial.begin(9600);
  pinMode(POT, INPUT);

}

void loop() {

  pot_value = analogRead(POT);
  Serial.println(pot_value);
  delay(750);
  
}
