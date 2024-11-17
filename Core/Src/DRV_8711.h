/*
 * DRV_8711.h
 *
 *  Created on: Nov 16, 2024
 *      Author: szymo
 */

#ifndef SRC_DRV_8711_H_
#define SRC_DRV_8711_H_

#include <stdint.h>
#include "spi.h"

/*rejestry*/
#define CTRL 	0x00
#define TORQUE 	0x01
#define OFF 	0x02
#define BLANK	0x03
#define DECAY	0x04
#define STALL	0x05
#define DRIVE	0x06
#define STATUS	0x07

/*konfiguracja*/
#define CTRL_set	0xC21
#define TORQUE_set  0x10F
#define BLANK_set 	0x180

void drv_reg_write(uint8_t reg, uint16_t value);
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif /* SRC_DRV_8711_H_ */

