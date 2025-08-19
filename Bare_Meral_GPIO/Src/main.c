// PD12 --output pin -- port D LED connected in board

#include "stm32f4xx.h"

void my_delay()
{
	int i,j;

for (i=0;i<1000;i++)
	for(j=0;j<500;j++)
		{
		}
}


int main()
{
	//RCC enable for port D --> clock enable
		RCC->AHB1ENR |= (1U<<3);  //Port D is connected to AHB1BUS to enable that we need to set the PIN 3 in (GPIOD EN) so Bitwise OR with
		                           // RCC->AHB1ENR | = (1U<<3) 3 times.
	//RCC enable for port C --> clock enable
		RCC->AHB1ENR |= (1U<<2);  //Port C is connected to AHB1BUS to enable that we need to set the PIN 2 in (GPIOC EN) so Bitwise OR with
				                           // RCC->AHB1ENR | = (1U<<2) 2 times.
		//  PORT C 14th PIN as input
		GPIOC->MODER &= ~(1U<<28); // set BIT no 24-- in GPIO port mode register 14th PIN is with MODER14 connected to 28th and 29th bit of register
		GPIOC->MODER &= ~(1U<<29);  //Reset BIT no 29 --to Select PIN 14th of PORT C as output pin
		//  PORT C 9th PIN as output
		GPIOC->MODER |= (1U<<18); // set BIT no 18-- in GPIO port mode register 9th PIN is with MODER9 connected to 18th and 19th bit of register
		GPIOC->MODER &= ~(1U<<19);  //Reset BIT no 19 -- to Select PIN 9th of PORT C as output pin


		//  SET PD12(LED1) as OUTPUT PIN
		GPIOD->MODER |= (1U<<24); // set BIT no 24-- in GPIO port mode register 12th PIN is with MODER12 connected to 24th and 25th bit of register
		GPIOD->MODER &= ~(1U<<25);  //Reset BIT no 25 --to Select PIN 12th of PORT D as output pin

		//  SET PD13(LED2) as OUTPUT PIN
		GPIOD->MODER |= (1U<<26); // set BIT no 26-- in GPIO port mode register 13th PIN is with MODER13 connected to 26th and 27th bit of register
		GPIOD->MODER &= ~(1U<<27);  //Reset BIT no 27-- to Select PIN 13th of PORT D as output pin
		//  SET PD14(LED3) as OUTPUT PIN
		GPIOD->MODER |= (1U<<28); // set BIT no 28-- in GPIO port mode register 14th PIN is with MODER14 connected to 28th and 29th bit of
		GPIOD->MODER &= ~(1U<<29);  // MODER register and Reset BIT no 29 ---to Select PIN 14th of PORT D as output pin
		//  SET PD15(LED4) as OUTPUT PIN
		GPIOD->MODER |= (1U<<30); // set BIT no 30, in GPIO port mode register 15th PIN is with MODER15 connected to 30th and 31th bit of
		GPIOD->MODER &= ~(1U<<31);  // MODERregister and Reset BIT no 31 -- to Select PIN 15th of PORT D as output pin




while(1)
 {
	/************ TO SET LED1(PD12) ON and TO SET LED1(PD12)OFF ***********/
       /************* Sir code


	//To set LED1 (connected to PD12on board) ---- IN Output Data register(ODR) set 12th Pin as HIGH
	GPIOD->ODR |= (1U<<12);
	//GPIOD->BSRR |= (1U<<12); To set LED1 Using BSRR Register. (Use ODR or BSSR any one)
	my_delay();

	//To reset LED1 (connected to PD12on board) ---- IN Output Data register(ODR) set 12th Pin as LOW
	 GPIOD->ODR &= ~(1U<<12);
	// GPIOD->BSRR |= (1U<<28); To Reset LED1 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();

	 **************** Sir code end */



	/**ASSIGNMENT 2 *********Turn ON PD12(LED1) and PD13(LED2) TURN OFF both*****


	 GPIOD->ODR |= (1U<<12); //To set LED1 (connected to PD12on board) ---- IN Output Data register(ODR) set 12th Pin as HIGH
	 //GPIOD->BSRR |= (1U<<12); To set LED1 Using BSRR Register. (Use ODR or BSSR any one)
	  my_delay();
	 GPIOD->ODR |= (1U<<13); //To set LED2 (connected to PD13on board) ---- IN Output Data register(ODR) set 13th Pin as HIGH
	 //GPIOD->BSRR |= (1U<<13); To set LED2 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();


	 GPIOD->ODR &= ~(1U<<12); //To reset LED1 (connected to PD12on board) ---- IN Output Data register(ODR) set 12th Pin as LOW
	 // GPIOD->BSRR |= (1U<<28); To Reset LED1 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();
	 GPIOD->ODR &= ~(1U<<13); //To reset LED2 (connected to PD13on board) ---- IN Output Data register(ODR) set 13th Pin as LOW
	 // GPIOD->BSRR |= (1U<<29); To Reset LED2 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();

********************/


/**ASSIGNMENT 3*********  Turn ON PD14(LED3) and PD15(LED4) TURN OFF both*****

//To Select PIN 14 and 15th  of PORT D as output pin


	 GPIOD->ODR |= (1U<<14); //To set LED3 (connected to PD14on board) ---- IN Output Data register(ODR) set 14th Pin as HIGH
	 // GPIOD->BSRR |= (1U<<14); To Reset LED3 Using BSRR Register. (Use ODR or BSSR any one)
	  my_delay();
	 GPIOD->ODR |= (1U<<15); //To set LED4 (connected to PD15on board) ---- IN Output Data register(ODR) set 15th Pin as HIGH
	 // GPIOD->BSRR |= (1U<<15); To Reset LED4 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();


	 GPIOD->ODR &= ~(1U<<14); //To reset LED3 (connected to PD14 on board) ---- IN Output Data register(ODR) set 14th Pin as LOW
	 // GPIOD->BSRR |= (1U<<30); To Reset LED3 Using BSRR Register. (Use ODR or BSSR any one)
	  my_delay();
	 GPIOD->ODR &= ~(1U<<15); //To reset LED4 (connected to PD15 on board) ---- IN Output Data register(ODR) set 15th Pin as LOW
	 // GPIOD->BSRR |= (1U<<31); To Reset LED4 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();

*****************/

/**ASSIGNMENT 4************* and TURN ON FOUR LED and TURN OFF all Four LED's *****************/

//To Select PIN 12,13,14 and 15th  of PORT D as output pin


	 GPIOD->ODR |= (1U<<12); //To set LED1 (connected to PD12on board) ---- IN Output Data register(ODR) set 12th Pin as HIGH
	 //GPIOD->BSRR |= (1U<<12); To set LED1 Using BSRR Register. (Use ODR or BSSR any one)
	 GPIOD->ODR |= (1U<<13); //To set LED2 (connected to PD13on board) ---- IN Output Data register(ODR) set 13th Pin as HIGH
	 //GPIOD->BSRR |= (1U<<13); To set LED2 Using BSRR Register. (Use ODR or BSSR any one)
	 GPIOD->ODR |= (1U<<14); //To set LED3 (connected to PD14on board) ---- IN Output Data register(ODR) set 14th Pin as HIGH
	  // GPIOD->BSRR |= (1U<<14); To Reset LED3 Using BSRR Register. (Use ODR or BSSR any one)
	 GPIOD->ODR |= (1U<<15); //To set LED4 (connected to PD15on board) ---- IN Output Data register(ODR) set 15th Pin as HIGH
	 // GPIOD->BSRR |= (1U<<15); To Reset LED4 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();

	 GPIOD->ODR &= ~(1U<<12); //To reset LED1 (connected to PD12on board) ---- IN Output Data register(ODR) set 12th Pin as LOW
	 // GPIOD->BSRR |= (1U<<28); To Reset LED1 Using BSRR Register. (Use ODR or BSSR any one)
	 GPIOD->ODR &= ~(1U<<13); //To reset LED2 (connected to PD13on board) ---- IN Output Data register(ODR) set 13th Pin as LOW
	  // GPIOD->BSRR |= (1U<<29); To Reset LED2 Using BSRR Register. (Use ODR or BSSR any one)
	 GPIOD->ODR &= ~(1U<<14); //To reset LED3 (connected to PD14 on board) ---- IN Output Data register(ODR) set 14th Pin as LOW
	 // GPIOD->BSRR |= (1U<<30); To Reset LED3 Using BSRR Register. (Use ODR or BSSR any one)
	 GPIOD->ODR &= ~(1U<<15); //To reset LED4 (connected to PD15 on board) ---- IN Output Data register(ODR) set 15th Pin as LOW
	 // GPIOD->BSRR |= (1U<<31); To Reset LED4 Using BSRR Register. (Use ODR or BSSR any one)
	 my_delay();

/*****************/

 }

}
