/*
 * DRV_8711.c
 *
 *  Created on: Nov 16, 2024
 *      Author: szymo
 */
#include "DRV_8711.h"

void drv_reg_write(uint8_t reg,uint16_t value){

	uint16_t spi_message=0;
	uint8_t byte[2]={0,0};


	spi_message=(0<<15)|(reg<<12)|value;
	byte[0]=spi_message&0xFF;
	byte[1]=(spi_message>>8)&0xFF;

	HAL_GPIO_WritePin(DRV_CS_GPIO_Port, DRV_CS_Pin, GPIO_PIN_SET);
	HAL_SPI_Transmit(&hspi1, byte, 2, HAL_MAX_DELAY);
	HAL_GPIO_WritePin(DRV_CS_GPIO_Port, DRV_CS_Pin, GPIO_PIN_RESET);


}




