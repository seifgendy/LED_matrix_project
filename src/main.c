

/*
 * main.c
 *
 * Created on: Apr 3, 2024
 *   Author: seif gendy
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"
#include "STK_interface.h"
#include "LEDMAT_interface.h"

////////////////////////////////////////////////////////
u8 myArray1[8] = {128, 160, 86, 62, 86, 160, 128, 0};///
u8 myArray2[8] = {128, 160, 86, 62, 86, 160, 192, 0};///
u8 myArray3[8] = {128, 160, 86, 62, 86, 160, 224, 0};///
u8 myArray4[8] = {128, 160, 86, 62, 86, 160, 192, 0};///
u8 myArray5[8] = {128, 160, 86, 62, 86, 160, 128, 0};///
////////////////////////////////////////////////////////


////////////////////////////////////////////////////////
u8 myArray6[8] = {128, 160, 86, 62, 86, 160, 128, 0};///
u8 myArray7[8] = {128, 160, 86, 62, 86, 161, 128, 0};///
////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
u8 myArray8[8] =  {128, 160, 86, 62, 86, 160, 128, 0};///
u8 myArray9[8] = {128, 160, 86, 62, 86, 160, 128,64}; ///
u8 myArray10[8] = {128, 160, 86, 62, 86, 160,128, 32};///
u8 myArray11[8] =  {128, 160, 86, 62, 86, 160, 144, 0};//
u8 myArray12[8] = {128, 160, 86, 62, 86, 168, 128, 0};///
/////////////////////////////////////////////////////////


void main(void)


{


  RCC_voidInit();
  RCC_voidEnablePrephiralClock( RCC_AHB , RCC_AHB_GPIOAEN);
  RCC_voidEnablePrephiralClock( RCC_AHB , RCC_AHB_GPIOBEN);
  MSTK_voidInit();
  HLEDMAT_voidInit();





	while(1)
		{



     HLED_voidDisplay(myArray1 ,1 );



     HLED_voidDisplay(myArray2 , 1);




     HLED_voidDisplay(myArray3 , 1);



     HLED_voidDisplay(myArray4 , 1);



     HLED_voidDisplay(myArray5 , 1);


     HLED_voidDisplay(myArray1 ,1 );



     HLED_voidDisplay(myArray2 , 1);




     HLED_voidDisplay(myArray3 , 1);



     HLED_voidDisplay(myArray4 , 1);



     HLED_voidDisplay(myArray5 , 1);

 //////////////////////////////////////////////

HLED_voidDisplay(myArray6 ,1 );
HLED_voidDisplay(myArray7 , 1);
HLED_voidDisplay(myArray6 ,1 );
HLED_voidDisplay(myArray7 , 1);

///////////////////////////////////////////////////////////////////
         HLED_voidDisplay(myArray8 , 1);



         HLED_voidDisplay(myArray9 , 1);



         HLED_voidDisplay(myArray10 , 1);


         HLED_voidDisplay(myArray11 ,1 );



         HLED_voidDisplay(myArray12 , 1);

                HLED_voidDisplay(myArray12 , 1);



                 HLED_voidDisplay(myArray11 , 1);



                 HLED_voidDisplay(myArray10 , 1);


                 HLED_voidDisplay(myArray9 ,1 );



                 HLED_voidDisplay(myArray8 , 1);

///////////////////////////////////////////////////////////////////////


		}


}
