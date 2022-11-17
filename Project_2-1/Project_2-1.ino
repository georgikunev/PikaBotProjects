long duration;
long distance;

#define TRIGPIN 5 
#define ECHOPIN 4

void setup() {
  pinMode(TRIGPIN, OUTPUT);
  pinMode(ECHOPIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(TRIGPIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);

  duration = pulseIn(ECHOPIN, HIGH);
  distance = duration * 0.017;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  

}
