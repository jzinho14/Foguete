const int ENA = 10;
const int ENB = 11;

const int IN1 = 2;
const int IN2 = 3;
const int IN3 = 4;
const int IN4 = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);


  analogWrite(ENA, 255);
  analogWrite(ENB, 255);

  digitalWrite(IN1, HIGH);
  delay(2000);
  digitalWrite(IN1, LOW);
  delay(1000);

  digitalWrite(IN2, HIGH);
  delay(2000);
  digitalWrite(IN2, LOW);
  delay(1000);

  digitalWrite(IN3, HIGH);
  delay(2000);
  digitalWrite(IN3, LOW);
  delay(1000);

  digitalWrite(IN4, HIGH);
  delay(2000);
  digitalWrite(IN4, LOW);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
