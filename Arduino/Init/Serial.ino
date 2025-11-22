void readFromSerial() {
  if (Serial.available() > 0) {
    String receivedData = Serial.readString();
    Serial.println("Received data: " + receivedData);
  }
}