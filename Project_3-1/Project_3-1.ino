#define IR_LEFT A0
#define IR_RIGHT A1

void setup() {
  pinMode(IR_LEFT, INPUT);
  pinMode(IR_RIGHT, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Left IR: ");
  Serial.print(digitalRead(IR_LEFT));
  Serial.print("   ");
  Serial.print("Right IR: ");
  Serial.println(digitalRead(IR_RIGHT));
}
