/****************************************************
 *  StartJudgement.h                                         
 *  Created on: 2014/06/09 7:35:39                      
 *  Implementation of the Class StartJudgement       
 *  Original author: kusunoki                     
 ****************************************************/

#include "TouchSensor.h"


// ������ێ����邽�߂̍\���̂̒�`
typedef struct StartJudgement
{
	TouchSensor *touchSensor;
} StartJudgement;

// ���J����
void StartJudgement_init(StartJudgement* this);
unsigned int StartJudgement_judgeStart(StartJudgement* this);
// bool StartJudgement_judgeStart(StartJudgement* this);

