/****************************************************
 *  StartJudgement.h                                         
 *  Created on: 2014/06/09 7:35:39                      
 *  Implementation of the Class StartJudgement       
 *  Original author: kusunoki                     
 ****************************************************/

#include "TouchSensor.h"


// 属性を保持するための構造体の定義
typedef struct StartJudgement
{
	TouchSensor *touchSensor;
} StartJudgement;

// 公開操作
void StartJudgement_init(StartJudgement* this);
unsigned int StartJudgement_judgeStart(StartJudgement* this);
// bool StartJudgement_judgeStart(StartJudgement* this);

