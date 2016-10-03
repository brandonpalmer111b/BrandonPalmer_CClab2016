
//citations
//CClab Class, Examples, Lynda.com 

int ledOne = 13;
int ledTwo = 11;
int ledThree = 9;
int ledFour = 7;

int buttonPin = 2;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledOne, OUTPUT);
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledOne, HIGH);
    delay(10);

    digitalWrite(ledOne, LOW);
    delay(20);

    digitalWrite(ledTwo, HIGH);
    delay(40);

    digitalWrite(ledTwo, LOW);
    delay(50);

    digitalWrite(ledThree, HIGH);
    delay(70);

    digitalWrite(ledThree, LOW);
    delay(80);

    digitalWrite(ledFour, HIGH);
    delay(100);

    digitalWrite(ledFour, LOW);
    delay(110);

    digitalWrite(ledFour, HIGH);
    delay(130);

    digitalWrite(ledFour, LOW);
    delay(140);

      digitalWrite(ledThree, HIGH);
    delay(160);

    digitalWrite(ledThree, LOW);
    delay(170);

      digitalWrite(ledTwo, HIGH);
    delay(190);

    digitalWrite(ledTwo, LOW);
    delay(200);

        digitalWrite(ledOne, HIGH);
    delay(220);

    digitalWrite(ledOne, LOW);
    delay(230);


  }


}
