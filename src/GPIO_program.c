/*********************************************
 * Author:				seif gendy
 * Creation Data:		28 Feb, 2024
 * Version:				v1.0
 * Compiler:			GNU ARM-GCC
 * Controller:			STM32F401CCU6
 * Layer:				MCAL
 ********************************************/
/*********************************************
 * Version	  Date				  Author				  Description
 * v1.0		  1 MARCH, 2024	      seif gendy		  ADDING APIS (APPLICATION PUBLIC/PROGRAM INTERFACE)
*********************************************/
#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "../include/GPIO_interface.h"
#include "../include/GPIO_private.h"
#include "../include/GPIO_config.h"

void MGPIO_voidSetPinMode(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8PinMode)
{
	/* Check For The Port Name*/
	switch(Copy_u8PortName)
	{
		case GPIO_PORTA:
			// Bit Masking
			GPIOA_MODER &= ~(MODER_MASK << (Copy_u8PinNumber * PIN_OFFSET));
			GPIOA_MODER |= (Copy_u8PinMode << ((Copy_u8PinNumber * PIN_OFFSET)));
		break;
		
		case GPIO_PORTB:
			GPIOB_MODER &= ~(MODER_MASK << (Copy_u8PinNumber * PIN_OFFSET));
			GPIOB_MODER |= (Copy_u8PinMode << ((Copy_u8PinNumber * PIN_OFFSET)));

		break;
		
		case GPIO_PORTC:
		GPIOC_MODER &= ~(MODER_MASK << (Copy_u8PinNumber * PIN_OFFSET));
		GPIOC_MODER |= (Copy_u8PinMode << ((Copy_u8PinNumber * PIN_OFFSET)));
		break;
		
		default:
			// Error
		break;
	}
}

void MGPIO_voidSetPinOutputSpeed(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8PinSpeed)
{
	/* Check For The Port Name*/
	switch(Copy_u8PortName)
	{
		case GPIO_PORTA:
			// Bit Masking
			GPIOA_OSPEEDR &= ~(OSPEEDR_MASK << (Copy_u8PinNumber * PIN_OFFSET));
			GPIOA_OSPEEDR |= (Copy_u8PinSpeed << ((Copy_u8PinNumber * PIN_OFFSET)));
		break;
		
		case GPIO_PORTB:

		GPIOB_OSPEEDR &= ~(OSPEEDR_MASK << (Copy_u8PinNumber * PIN_OFFSET));
		GPIOB_OSPEEDR |= (Copy_u8PinSpeed << ((Copy_u8PinNumber * PIN_OFFSET)));
		break;
		
		case GPIO_PORTC:
		GPIOC_OSPEEDR &= ~(OSPEEDR_MASK << (Copy_u8PinNumber * PIN_OFFSET));
		GPIOC_OSPEEDR |= (Copy_u8PinSpeed << ((Copy_u8PinNumber * PIN_OFFSET)));
		break;
		
		default:
			// Error
		break;
	}
}



void MGPIO_voidSetPinOutputType(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8PinOutputType)
{
	/* Check For The Port Name*/
	switch(Copy_u8PortName)
	{
		case GPIO_PORTA:
			// Bit Masking
			GPIOA_OTYPER &= ~(OTYPE_MASK << Copy_u8PinNumber);
			GPIOA_OTYPER |= (Copy_u8PinOutputType << Copy_u8PinNumber);
		break;
		
		case GPIO_PORTB:
		GPIOB_OTYPER &= ~(OTYPE_MASK << Copy_u8PinNumber);
		GPIOB_OTYPER |= (Copy_u8PinOutputType << Copy_u8PinNumber);
		break;
		
		case GPIO_PORTC:
		GPIOC_OTYPER &= ~(OTYPE_MASK << Copy_u8PinNumber);
		GPIOC_OTYPER |= (Copy_u8PinOutputType << Copy_u8PinNumber);
		break;
		
		default:
			// Error
		break;
	}
}

void MGPIO_voidSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8PinValue)
{
/* Check For The Port Name*/
	switch(Copy_u8PortName)
	{
		case GPIO_PORTA:
			switch(Copy_u8PinValue)
			{
				case GPIO_PIN_LOW:
					//SET_BIT(GPIOA_BSRR, (Copy_u8PinNumber+16));
					GPIOA_BSRR = 1 << (Copy_u8PinNumber+16);
				break;
				
				case GPIO_PIN_HIGH:
					//SET_BIT(GPIOA_BSRR, Copy_u8PinNumber);
					GPIOA_BSRR = 1 << Copy_u8PinNumber;
				break;
				
				default:
					// Error
				break;
			}
		break;
		
		case GPIO_PORTB:
               switch(Copy_u8PinValue)
			{
				case GPIO_PIN_LOW:
					//SET_BIT(GPIOA_BSRR, (Copy_u8PinNumber+16));
					GPIOB_BSRR = 1 << (Copy_u8PinNumber+16);
				break;
				
				case GPIO_PIN_HIGH:
					//SET_BIT(GPIOA_BSRR, Copy_u8PinNumber);
					GPIOB_BSRR = 1 << Copy_u8PinNumber;
				break;
				
				default:
					// Error
				break;
			}




		break;
		
		case GPIO_PORTC:

switch(Copy_u8PinValue)
			{
				case GPIO_PIN_LOW:
					//SET_BIT(GPIOA_BSRR, (Copy_u8PinNumber+16));
					GPIOC_BSRR = 1 << (Copy_u8PinNumber+16);
				break;
				
				case GPIO_PIN_HIGH:
					//SET_BIT(GPIOA_BSRR, Copy_u8PinNumber);
					GPIOC_BSRR = 1 << Copy_u8PinNumber;
				break;
				
				default:
					// Error
				break;
			}

		break;
		
		default:
			// Error
		break;
	}
}

