/****************************************************
 *  StartJudgement.c                                         
 *  Created on: 2014/06/09 7:35:39                      
 *  Implementation of the Class StartJudgement       
 *  Original author: kusunoki                     
 ****************************************************/

#include "StartJudgement.h"


// 初期化する
void StartJudgement_init(StartJudgement* this)
{
}

// スタートするを判定する
unsigned int StartJudgement_judgeStart(StartJudgement* this)
// bool StartJudgement_judgeStart(StartJudgement* this)
{
	return TouchSensor_getTouch(this->touchSensor);
} 




