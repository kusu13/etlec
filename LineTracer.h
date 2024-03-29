/****************************************************
 *  LineTracer.h                                         
 *  Created on: 2012/05/05 7:35:10                      
 *  Implementation of the Class LineTracer       
 *  Original author: hiroyuki.watanabe                     
 ****************************************************/

#if !defined(EA_A4BD4D1A_E40A_4143_A4C5_AC9B36316301__INCLUDED_)
#define EA_A4BD4D1A_E40A_4143_A4C5_AC9B36316301__INCLUDED_


#include "ColorJudgement.h"
#include "BalanceRunner.h"


// 属性を保持するための構造体の定義
typedef struct LineTracer
{
	ColorJudgement *colorJudgement;
	BalanceRunner *balanceRunner;
} LineTracer;

// 公開操作
void LineTracer_init(LineTracer* this);
void LineTracer_trace(LineTracer* this);

#endif /*!defined(EA_A4BD4D1A_E40A_4143_A4C5_AC9B36316301__INCLUDED_)*/

