#ifndef __XUN_H
#define __XUN_H	 
#include "sys.h"

#define L_1	  GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_1)
#define L_2 	GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_2)
#define M_4 	GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_4)
#define R_6 	GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_6)
#define R_7 	GPIO_ReadInputDataBit(GPIOC,GPIO_Pin_7)

void XUNJI_LEDInit(void);
void XUN_Init(void);//≥ı ºªØ

#endif


