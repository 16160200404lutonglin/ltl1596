#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "timer.h"
 
/************************************************
 ALIENTEKս��STM32������ʵ��9
 PWM���ʵ��  
 ����֧�֣�www.openedv.com
 �Ա����̣�http://eboard.taobao.com 
 ��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 ������������ӿƼ����޹�˾  
 ���ߣ�����ԭ�� @ALIENTEK
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

 
 
 
