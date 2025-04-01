#define RIGHT_MOTOR 2
#define LEFT_MOTOR 12

void setup() {
    // Set the motor pins
    pinMode(RIGHT_MOTOR, OUTPUT);
    pinMode(LEFT_MOTOR, OUTPUT);

}

void loop() {
    digitalWrite(RIGHT_MOTOR, LOW);
}