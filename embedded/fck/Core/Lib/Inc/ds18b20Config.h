#ifndef	_DS18B20CONFIG_H
#define	_DS18B20CONFIG_H

extern TIM_HandleTypeDef htim2;
//	Init timer on cube    1us per tick				example 72 MHz cpu >>> Prescaler=(72-1)      counter period=Max 
//###################################################################################
#define	_DS18B20_USE_FREERTOS		    				0 // 원래는 FreeRTOS 써야했는데 fix add none FreeRTOS 안해도 될 수 있게 바꿨다.
#define _DS18B20_MAX_SENSORS		    				1
#define	_DS18B20_GPIO							PA3_TEMP_DATA_GPIO_Port // 위에 보니까 여기 구성요소에 GPIO PIN을 세팅해줘서 연결하게 되겠네
#define	_DS18B20_PIN							PA3_TEMP_DATA_Pin

#define	_DS18B20_CONVERT_TIMEOUT_MS					5000		
#if (_DS18B20_USE_FREERTOS==1)
#define	_DS18B20_UPDATE_INTERVAL_MS					10000					//  (((	if==0  >> Ds18b20_ManualConvert()  )))    ((( if>0  >>>> Auto refresh ))) 
#endif


#define	_DS18B20_TIMER							htim2 //timer handler라는 뜻이니까 timer를 만들자 ㅇㅇ
//###################################################################################

#endif


