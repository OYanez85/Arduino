// Joystick X-axis connected to analog pin A0
int xPin = A0;

// Joystick Y-axis connected to analog pin A1
int yPin = A1;

// Joystick push button connected to digital pin 2
int buttonPin = 2;

// Variables to store the X and Y analog readings
int xVal;
int yVal;

// Variable to store the button state
int buttonState;

void setup() {
  // Start serial communication so values can be seen in the Serial Monitor
  Serial.begin(9600);

  // Set the X and Y pins as inputs
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);

  // Set the button pin as input with the internal pull-up resistor enabled
  // This means:
  // HIGH = button not pressed
  // LOW  = button pressed
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // Read the joystick position on the X-axis (value from 0 to 1023)
  xVal = analogRead(xPin);

  // Read the joystick position on the Y-axis (value from 0 to 1023)
  yVal = analogRead(yPin);

  // Read the state of the joystick button
  buttonState = digitalRead(buttonPin);

  // Print the X-axis label
  Serial.print("X: ");

  // Print the X-axis value
  Serial.print(xVal);

  // Print separator and Y-axis label
  Serial.print(" | Y: ");

  // Print the Y-axis value
  Serial.print(yVal);

  // Print separator and button label
  Serial.print(" | Button: ");

  // Check whether the button is pressed
  if (buttonState == LOW) {
    // With INPUT_PULLUP, LOW means the button is pressed
    Serial.println("Pressed");
  } else {
    // HIGH means the button is not pressed
    Serial.println("Not Pressed");
  }

  // Small pause to make the Serial Monitor easier to read
  delay(100);
}
