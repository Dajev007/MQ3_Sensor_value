// Define the pin where the MQ3 sensor is connected
int mq3SensorAnalogPin = A0;  // Analog output connected to A0 of Arduino
int mq3SensorDigitalPin = 2;  // Analog output connected to A0 of Arduino

void setup() {
  Serial.begin(9600);          // Start the serial communication
  pinMode(mq3SensorAnalogPin, INPUT); // Set the MQ3 sensor pin as an input
  pinMode(mq3SensorDigitalPin, INPUT); // Set the MQ3 sensor pin as an input
}

void loop() {
  int AnalogValue = analogRead(mq3SensorAnalogPin); // Read the analog value from sensor
  int DigitalValue = digitalRead(mq3SensorDigitalPin); // Read the analog value from sensor

  Serial.print("Analog Value: ");
  Serial.print(AnalogValue); 
  Serial.print(" | Digital Value: "); 
  Serial.println(DigitalValue); 

  delay(1000); // Delay for a while before reading again
}
