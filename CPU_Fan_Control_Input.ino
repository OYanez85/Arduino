#define motorPin 11

void setup() {
  //define motor pin as an output
  pinMode(motorPin, OUTPUT);
  //initially turn off the fan
  analogWrite(motorPin, 0);
  Serial.begin(9600);
  //Display instructions
  Serial.println("Enter a number between 0 and 9: ");
}

void loop() {
  if (Serial.available()) {
    //Get the input from the user
    char ch = Serial.read();
    if (ch >= '0' && ch <= '9') {
      int speed = ch - '0';
      //Set the appropriate fan speed
      analogWrite(motorPin, map(speed, 0, 9, 0, 255));
    }
  }
}
