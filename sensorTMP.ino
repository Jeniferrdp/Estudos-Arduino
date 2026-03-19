int sensor = A0;
int buzzer = 8;
int motor = 3;
int led = 4;

float temperatura = 0;

void setup() {
  Serial.begin(9600);

  pinMode(buzzer, OUTPUT);
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int leitura = analogRead(sensor);

  float tensao = leitura * (5.0 / 1023.0);

  temperatura = (tensao - 0.5) * 100;

  Serial.println(temperatura);

  if (temperatura >= 30) {
    digitalWrite(motor, HIGH);
  } else {
    digitalWrite(motor, LOW);
  }

  if (temperatura > 50) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(1000);
}
