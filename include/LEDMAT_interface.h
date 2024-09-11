/*********************************************
 * Author:				Abdullah M. Abdullah
 * Creation Data:		22 Mar, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				HAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  2  april, 2024	seif gendy		       Initial Creation
*********************************************/
#ifndef LEDMAT_INTERFACE_H
#define LEDMAT_INTERFACE_H

void HLEDMAT_voidInit(void);
void HLED_voidDisplay(u8 * Copy_pu8Data , u32 disp_time_sec);


#endif
