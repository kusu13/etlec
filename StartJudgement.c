/****************************************************
 *  StartJudgement.c                                         
 *  Created on: 2014/06/09 7:35:39                      
 *  Implementation of the Class StartJudgement       
 *  Original author: kusunoki                     
 ****************************************************/

#include "StartJudgement.h"


// ����������
void StartJudgement_init(StartJudgement* this)
{
}

// �X�^�[�g����𔻒肷��
unsigned int StartJudgement_judgeStart(StartJudgement* this)
// bool StartJudgement_judgeStart(StartJudgement* this)
{
	return TouchSensor_getTouch(this->touchSensor);
} 




