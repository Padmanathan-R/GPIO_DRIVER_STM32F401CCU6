#include <stdint.h>
#include "main.h"

int main(void)
{
    RCC_AHB1ENR_t volatile * const pClk = (RCC_AHB1ENR_t*) 0x40023830;
    GPIOx_MODER_t volatile * const pModer = (GPIOx_MODER_t*) 0x40020800;
    GPIOx_ODR_t volatile *const pOdr = (GPIOx_ODR_t*) 0x40020814;

    //Enabling Clock for PORT C
    pClk -> gpioc_en = 1;

    //Configuring PC13 as Output
    pModer -> moder_13 = 1;

    while(1)
    {
	pOdr -> odr_13 = 0; //Turn on PC13 (ACTIVE LOW)
	for(volatile uint32_t i = 0;i<500000;i++); //Delay
	pOdr -> odr_13 = 1; //Turn off PC13 (ACTIVE HIGH)
	for(volatile uint32_t i = 0;i<500000;i++); //Delay

    }
}
