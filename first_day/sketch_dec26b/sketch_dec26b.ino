int red = 11;
int blue = 10;
int green = 9;

void setup()
{
  pinMode(11, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode( 9, OUTPUT);
}

void loop()
{
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  digitalWrite( 9, LOW);
    delay(100);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  digitalWrite( 9, LOW);
    delay(100);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  digitalWrite( 9, HIGH);
    delay(100);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
  digitalWrite( 9, LOW);
    delay(100);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
  digitalWrite( 9, HIGH);
    delay(100);
  digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
  digitalWrite( 9, HIGH);
    delay(100);
  digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
  digitalWrite( 9, HIGH);
    delay(100);
  digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  digitalWrite( 9, LOW);
    delay(100);
}
