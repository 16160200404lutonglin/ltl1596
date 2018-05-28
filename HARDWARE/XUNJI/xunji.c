#include "xunji.h"

void XUNJI_LEDInit(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC , ENABLE);
	
	GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_4 | GPIO_Pin_6 | GPIO_Pin_7;//配置使能GPIO管脚
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;//配置GPIO模式,输入上拉
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;//配置GPIO端口速度
	GPIO_Init(GPIOC, &GPIO_InitStructure);//初始化GPIO 
	GPIO_SetBits(GPIOC, GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_4 | GPIO_Pin_6 | GPIO_Pin_7);	

}
void XUN_Init(void)
{
   if(M_4==0){
			TIM_SetCompare1(TIM3,0);
		 
			TIM_SetCompare1(TIM1,0);
			TIM_SetCompare3(TIM1,0);
	 
	          }
	 if(L_1==0){
			TIM_SetCompare1(TIM3,0);
		 
			TIM_SetCompare1(TIM1,0);
			TIM_SetCompare3(TIM1,0);
	 
	          }
	 if(L_2==0){
			TIM_SetCompare1(TIM3,0);
		 
			TIM_SetCompare1(TIM1,0);
			TIM_SetCompare3(TIM1,0);
	 
	          }
	 if(R_6==0){
			TIM_SetCompare1(TIM3,0);
		 
			TIM_SetCompare1(TIM1,0);
			TIM_SetCompare3(TIM1,0);
	 
	          }
	 if(R_7==0){
			TIM_SetCompare1(TIM3,0);
		 
			TIM_SetCompare1(TIM1,0);
			TIM_SetCompare3(TIM1,0);
	 
	          }
	
}

