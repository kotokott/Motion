#include "mpu6500.h"
#include <Wire.h>
#include "Config.h"

bfs::Mpu6500 imu1(&SPI, 10);
//bfs::Mpu9250 imu2(&SPI, 1);
//bfs::Mpu9250 imu3(&SPI, 5);

void imuConfig(bfs::Mpu6500& imu) {
  if (!imu.Begin()) {
    Serial.println("MPU6500 init error. Please try again!");
    while (1) {}
  }

  if (!imu.ConfigSrd(19)) {
    Serial.println("Error configured SRD");
    while (1) {}
  }
}

void setup() {
  Serial.begin(115200);
  while (!Serial) {}

  SPI.begin();

  imuConfig(imu1);
  //imuConfig(imu2);
  //imuConfig(imu3);  
}

void loop() {
  imuRead(imu1);
  //imuRead(imu2);
  //imuRead(imu3);

  //readFromSerial();

  delay(300);
}