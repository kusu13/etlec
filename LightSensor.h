/****************************************************
 *  LightSensor.h                                         
 *  Created on: 2012/05/05 7:35:44                      
 *  Implementation of the Class LightSensor       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_864E58A2_E079_47f7_A30D_E7178C933A70__INCLUDED_)
#define EA_864E58A2_E079_47f7_A30D_E7178C933A70__INCLUDED_


#include "ecrobot_interface.h"
#include "kernel.h"


// 属性を保持するための構造体の定義
typedef struct LightSensor
{
	SENSOR_PORT_T inputPort;
} LightSensor;

// 公開操作
void LightSensor_init(LightSensor* this, SENSOR_PORT_T inputPort);
unsigned int LightSensor_getBrightness(LightSensor* this);


#endif /*!defined(EA_864E58A2_E079_47f7_A30D_E7178C933A70__INCLUDED_)*/

