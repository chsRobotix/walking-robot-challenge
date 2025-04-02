#define RIGHT_MOTOR 2
#define LEFT_MOTOR 12

void setup() {
    // Set the motor pins
    pinMode(RIGHT_MOTOR, OUTPUT);
    pinMode(LEFT_MOTOR, OUTPUT);
}

void loop() {
    digitalWrite(RIGHT_MOTOR, HIGH);
    digitalWrite(LEFT_MOTOR, LOW);
    delay(1000);


    digitalWrite(RIGHT_MOTOR, LOW);
    digitalWrite(LEFT_MOTOR, HIGH);
    delay(1000);
}