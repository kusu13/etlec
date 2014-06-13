/****************************************************
 *  TouchSensor.c                                         
 *  Created on: 2014/06/09 7:35:33                      
 *  Implementation of the Class TouchSensor       
 *  Original author: kusunoki                     
 ****************************************************/

#include "TouchSensor.h"



// ‰Šú‰»‚·‚é
void TouchSensor_init(TouchSensor* this, SENSOR_PORT_T inputPort)
{
	this->inputPort = inputPort;
}

unsigned int TouchSensor_getTouch(TouchSensor* this)
// bool TouchSensor_getTouch(TouchSensor* this)
{
	return ecrobot_get_touch_sensor(this->inputPort);
}


