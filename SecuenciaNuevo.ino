int leds[10] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};


void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 10; i++) {
    pinMode(leds[i], OUTPUT);
  }

}

void loop() {
  for (int i = 0; i < 10; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
  }

  for (int i = 0; i < 10; i++) {
    digitalWrite(leds[i], LOW);
    delay(200);
  }
  for (int i = 0; i < 10; i++) {
    digitalWrite(leds[i], HIGH);   // Enciende LED
    delay(300);
    digitalWrite(leds[i], LOW);    // Apaga LED
    delay(300);
  }
  for (int i = 9; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);   // Enciende LED
    delay(300);
    digitalWrite(leds[i], LOW);    // Apaga LED
    delay(300);
  }
  for (int i = 0; i < 5; i++) {

    int left  = 4 - i;   // 4, 3, 2, 1, 0
    int right = 5 + i;   // 5, 6, 7, 8, 9

    digitalWrite(leds[left], HIGH);
    digitalWrite(leds[right], HIGH);
    delay(300);

    digitalWrite(leds[left], LOW);
    digitalWrite(leds[right], LOW);
    delay(300);
  }
}
