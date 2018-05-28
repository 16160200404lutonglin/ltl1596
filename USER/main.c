#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
 
/************************************************
 ALIENTEK战舰STM32开发板实验9
 PWM输出实验  
 技术支持：www.openedv.com
 淘宝店铺：http://eboard.taobao.com 
 关注微信公众平台微信号："正点原子"，免费获取STM32资料。
 广州市星翼电子科技有限公司  
 作者：正点原子 @ALIENTEK
************************************************/

	
 int main(void)
 {
	 
	 
	 TIM3_PWM_Init(999,720);
	 TIM_SetCompare1(TIM3,100);
	 
	 
	 TIM1_PWM_Init(999,720);
	 TIM_SetCompare1(TIM1,99);
	 TIM_SetCompare2(TIM1,0);
	 TIM_SetCompare3(TIM1,99);
	 TIM_SetCompare4(TIM1,0);
	 
	 
	 
 }

 
 
 
