/****************************************************
 *  StartJudgement.h                                         
 *  Created on: 2014/06/09 7:35:39                      
 *  Implementation of the Class StartJudgement       
 *  Original author: kusunoki                     
 ****************************************************/

#include "TouchSensor.h"


// ‘®«‚ğ•Û‚·‚é‚½‚ß‚Ì\‘¢‘Ì‚Ì’è‹`
typedef struct StartJudgement
{
	TouchSensor *touchSensor;
} StartJudgement;

// ŒöŠJ‘€ì
void StartJudgement_init(StartJudgement* this);
unsigned int StartJudgement_judgeStart(StartJudgement* this);
// bool StartJudgement_judgeStart(StartJudgement* this);

