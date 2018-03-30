int temp = 5;
int light = 10;
int red = 9;
int blue = 6;
int safe = 25;
int safeTemp = 16;

void setup() {
pinMode(light, INPUT);
pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
}

void loop() {
  int lightValue = analogRead(light);
  if (lightValue < safe && safeTemp > temp) {
	digitalWrite(blue, HIGH);
	digitalWrite(red, LOW);
  }
  else {
	digitalWrite(red, HIGH);
	digitalWrite(blue, LOW);
  }
}
