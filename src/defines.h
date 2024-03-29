/**
 *  Defines for your entire project at one place
 * 
 *	@author 	Tilen MAJERLE
 *	@email		tilen@majerle.eu
 *	@website	http://stm32f4-discovery.net
 *	@version 	v1.0
 *	@ide		Keil uVision 5
 *	@license	GNU GPL v3
 *	
 * |----------------------------------------------------------------------
 * | Copyright (C) Tilen MAJERLE, 2014
 * | 
 * | This program is free software: you can redistribute it and/or modify
 * | it under the terms of the GNU General Public License as published by
 * | the Free Software Foundation, either version 3 of the License, or
 * | any later version.
 * |  
 * | This program is distributed in the hope that it will be useful,
 * | but WITHOUT ANY WARRANTY; without even the implied warranty of
 * | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * | GNU General Public License for more details.
 * | 
 * | You should have received a copy of the GNU General Public License
 * | along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * |----------------------------------------------------------------------
 */
#ifndef TM_DEFINES_H
#define TM_DEFINES_H

/* Put your global defines for all libraries here used in your project */
#define STM32F407VG

/* Select custom SPI for accelerometer for your application */
//#define LIS302DL_LIS3DSH_SPI				SPI1
//#define LIS302DL_LIS3DSH_SPI_PINSPACK		TM_SPI_PinsPack_1

/* Select custom Cs pin for accelerometer for your application */
//#define LIS302DL_LIS3DSH_CS_RCC			RCC_AHB1Periph_GPIOE
//#define LIS302DL_LIS3DSH_CS_PORT			GPIOE
//#define LIS302DL_LIS3DSH_CS_PIN			GPIO_Pin_3

#endif

