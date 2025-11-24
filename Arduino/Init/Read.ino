#include "mpu6500.h"
#include <Wire.h>
#include "Config.h"

void imuRead(bfs::Mpu6500& imu) {
  if (imu.Read()) {
    //acceleration
    float ax = imu.accel_x_mps2();
    float ay = imu.accel_y_mps2();
    float az = imu.accel_z_mps2();

    //angular velocity
    float gx = imu.gyro_x_radps();
    float gy = imu.gyro_y_radps();
    float gz = imu.gyro_z_radps();

    Serial.print("Acceleration: ");
    Serial.print(ax);
    Serial.print(", ");
    Serial.print(ay);
    Serial.print(", ");
    Serial.println(az);

    Serial.print("Angular velocity: ");
    Serial.print(gx);
    Serial.print(", ");
    Serial.print(gy);
    Serial.print(", ");
    Serial.println(gz);
  }
}