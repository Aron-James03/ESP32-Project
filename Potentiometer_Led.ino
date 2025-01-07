// Define the ADC pin where the potentiometer is connected
#define potPin 34
#define ledPin 2

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  // Configure the potentiometer pin as input
  pinMode(potPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the analog value from the potentiometer
  int potValue = analogRead(potPin);

  // Map the value to a range (optional, for better readability)
  //int mappedValue = map(potValue, minimumInput, maximumInput, minimumOutput, maximumOutput);
  int mappedValue = map(potValue, 0, 4095, 0, 100);

  // Set the LED brightness based on the potentiometer value
  analogWrite(ledPin, mappedValue);

  // Print the raw and mapped values to the Serial Monitor
  Serial.print("Raw Value: ");
  Serial.print(potValue);
  Serial.print(" | Mapped Value: ");
  Serial.println(mappedValue);

  // Delay for a short period to avoid spamming the monitor
}
