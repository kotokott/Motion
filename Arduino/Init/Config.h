#ifndef CONFIG_H
#define CONFIG_H

#include "mpu9250.h"

void imuConfig(bfs::Mpu9250& imu); 
void imuRead(bfs::Mpu9250& imu);

#endif