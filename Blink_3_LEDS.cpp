const int ledPin1 = 6;
const int ledPin2 = 7;
const int ledPin3 = 8;
const int buttonPin = 9;

void setup()
{
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(buttonPin, INPUT); // or INPUT_PULLUP depending on your wiring
}

void loop()
{
    int buttonState = digitalRead(buttonPin);

    if (buttonState == HIGH) {
        // Button pressed: blink LEDS
        digitalWrite(ledPin1, HIGH);
        delay(1000);
        digitalWrite(ledPin1, LOW);
        delay(1000);

        digitalWrite(ledPin2, HIGH);
        delay(1000);
        digitalWrite(ledPin2, LOW);
        delay(1000);

        digitalWrite(ledPin3, HIGH);
        delay(1000);
        digitalWrite(ledPin3, LOW);
        delay(1000);
    } else {
        // Button not pressed: keep LEDS off
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
    }
}
