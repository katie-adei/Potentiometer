const int potPin = 2;

int potValue;
float voltage =0;

void setup() {
  Serial.begin(115200);// put your setup code here, to run once:
}


void loop() {
  potValue = analogRead(potPin);
  voltage = (3.3/4095.0)*potValue;
  Serial.print("potValue:");
  Serial.print(potValue);

  Serial.print("voltage:");
  Serial.print(voltage);
  Serial.println("V");
  delay(50);
}
  // put your main code here, to run repeatedly:

