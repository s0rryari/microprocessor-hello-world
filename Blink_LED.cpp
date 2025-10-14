const int ledPin = 8;
const int buttonPin = 9;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT); // or INPUT_PULLUP depending on your wiring
}

void loop()
{
    int buttonState = digitalRead(buttonPin);

    if (buttonState == HIGH) {
        // Button pressed: blink LED
        digitalWrite(ledPin, HIGH);
        delay(1000);
        digitalWrite(ledPin, LOW);
        delay(1000);
    } else {
        // Button not pressed: keep LED off
        digitalWrite(ledPin, LOW);
    }
}
