/****************************************************
 *  TouchSensor.h                                         
 *  Created on: 2014/06/09 7:35:33                      
 *  Implementation of the Class TouchSensor       
 *  Original author: kusunoki                     
 ****************************************************/
#if !defined(TOUCHSENSOR_test__INCLUDED_)
#define TOUCHSENSOR_test__INCLUDED_

#include "ecrobot_interface.h"
#include "kernel.h"


// 属性を保持するための構造体の定義
typedef struct TouchSensor
{
	SENSOR_PORT_T inputPort;
} TouchSensor;

// 公開操作
void TouchSensor_init(TouchSensor* this, SENSOR_PORT_T inputPort);
unsigned int TouchSensor_getTouch(TouchSensor* this);
// bool TouchSensor_getTouch(TouchSensor* this);


#endif
