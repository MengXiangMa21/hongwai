#include"guang.h"
//#include"main.h"





GPIO_PinState guang(void)
{
    GPIO_PinState a;

    a=HAL_GPIO_ReadPin(GPIOB,red_Pin);
    return a;
}