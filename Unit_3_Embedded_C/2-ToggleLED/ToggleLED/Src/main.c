#include "STD_TYPES.h"

#define			GPIOA_BASE_ADDRESS												0x40020000
typedef struct {
	/* GPIO port mode register.*/
	u32 MODER;
	/*GPIO port output type register.*/
	u32 OTYPER;
	/*GPIO port output speed register.*/
	u32 OSPEEDER;
	/*GPIO port pull-up/pull-down register.*/
	u32 PUPDR;
	/*GPIO port input data register.*/
	u32 IDR;
	/*GPIO port output data register.*/
	u32 ODR;
	/*GPIO port bit set/reset register*/
	u32 BSRR;
	/*GPIO port configuration lock register*/
	u32 LCKR;
	/*GPIO alternate function low register*/
	u32 AFRL;
	/*GPIO alternate function high register*/
	u32 AFRH;
}GPIO_MemMap;

#define 		GPIOA						((volatile GPIO_MemMap*)(GPIOA_BASE_ADDRESS))
#define			RCC_BASE_ADDRESS			0x40023800
typedef struct {
	u32 CR;
	u32 PLLCFGR;
	u32 CFGR;
	u32 CIR;
	u32 AHB1RSTR;
	u32 AHB2RSTR;
	u32 AHB3RSTR;
	u32 Reserved0;
	u32 APB1RSTR;
	u32 APB2RSTR;
	u32 Reserved1;
	u32 Reserved2;
	u32 AHB1ENR;
	u32 AHB2ENR;
	u32 AHB3ENR;
	u32 Reserved3;
	u32 APB1ENR;
	u32 APB2ENR;
	u32 Reserved4;
	u32 Reserved5;
	u32 AHB1LPENR;
	u32 AHB2LPENR;
	u32 AHB3LPENR;
	u32 Reserved6;
	u32 APB1LPENR;
	u32 APB2LPENR;
	u32 Reserved7;
	u32 Reserved8;
	u32 BDCR;
	u32 CSR;
	u32 Reserved9;
	u32 Reserved10;
	u32 SSCGR;
	u32 PLLI2SCFGR;
	u32 PLLSAICFGR;
	u32 DCKCFGR;
	u32 CKGATENR;
	u32 DCKCFGR2;
}RCC_MemMap;

#define 		RCC		((volatile RCC_MemMap*)(RCC_BASE_ADDRESS))
int main(void)
{
	/*Enable RCC For GPIOA Peripheral*/
	RCC->AHB1ENR |= (1<<0);
	/*Configure Pin A0 as output pin*/
	GPIOA->MODER |= (1<<0);
	GPIOA->MODER &= ~(1<<1);

	while(1){
		/*Set A0 Pin*/
		GPIOA->BSRR |= 1;
		/*delay*/
		for (u32 i = 0; i<500000; i++){
			asm volatile ("NOP");
		}
		/*Reset A0 Pin*/
		GPIOA->BSRR |= 1<<16;
		for (u32 i = 0; i<500000; i++){
			asm volatile ("NOP");
		}
	}
}
