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


// ‘®«‚ğ•Û‚·‚é‚½‚ß‚Ì\‘¢‘Ì‚Ì’è‹`
typedef struct TouchSensor
{
	SENSOR_PORT_T inputPort;
} TouchSensor;

// ŒöŠJ‘€ì
void TouchSensor_init(TouchSensor* this, SENSOR_PORT_T inputPort);
unsigned int TouchSensor_getTouch(TouchSensor* this);
// bool TouchSensor_getTouch(TouchSensor* this);


#endif
