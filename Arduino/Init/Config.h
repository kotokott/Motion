#ifndef CONFIG_H
#define CONFIG_H

#include "mpu6500.h"

void imuConfig(bfs::Mpu6500& imu); 
void imuRead(bfs::Mpu6500& imu);

#endif