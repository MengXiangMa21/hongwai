#include"feng.h"
//#include"main.h"
#include "stm32f1xx_hal.h"




void feng_on(void)
{
    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_RESET);
}

void feng_off(void)
{
    HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,GPIO_PIN_SET);

    return;
}