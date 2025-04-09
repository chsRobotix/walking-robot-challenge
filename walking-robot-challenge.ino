const int RIGHT_LEG_MOTOR = 2;
const int RIGHT_FOOT_MOTOR 4;
const int LEFT_LEG_MOTOR = 12;
const int LEFT_FOOT_MOTOR = 10;

void setup() {
    // Set the motor pins
    pinMode(RIGHT_LEG_MOTOR, OUTPUT);
    pinMode(RIGHT_FOOT_MOTOR, OUTPUT);
    pinMode(LEFT_LEG_MOTOR, OUTPUT);
    pinMode(LEFT_FOOT_MOTOR, OUTPUT);
}

void loop() {
    digitalWrite(RIGHT_LEG_MOTOR, HIGH);
    digitalWrite(RIGHT_FOOT_MOTOR, HIGH);
    digitalWrite(LEFT_LEG_MOTOR, LOW);
    delay(1000);

    digitalWrite(LEFT_LEG_MOTOR, HIGH);
    digitalWrite(LEFT_FOOT_MOTOR, HIGH);
    digitalWrite(RIGHT_LEG_MOTOR, LOW);
    delay(1000);
}