///////////////////////////////////////////////////////////
//  model_impl.c
///////////////////////////////////////////////////////////

#include "LineTracer.h"
#include "ColorJudgement.h"
#include "BalanceRunner.h"
#include "LightSensor.h"
#include "GyroSensor.h"
#include "Motor.h"

#include "StartJudgement.h"
#include "TouchSensor.h"

#include "kernel.h"
#include "kernel_id.h"
#include "ecrobot_interface.h"

// オブジェクトを静的に確保する
LineTracer 	lineTracer;
ColorJudgement 	colorJudgement;
BalanceRunner 	balanceRunner;
LightSensor 	lightSensor;
GyroSensor 	gyroSensor;
Motor 		leftMotor, rightMotor;

StartJudgement	startJudgement;
TouchSensor	touchSensor;

// デバイス初期化用フック関数
// この関数はnxtOSEK起動時に実行されます。
void ecrobot_device_initialize()
{
	// センサ、モータなどの各デバイスの初期化関数を
	// ここで実装することができます
	// ⇒　光センサ赤色LEDをONにする
	ecrobot_set_light_sensor_active(NXT_PORT_S3);
}

// デバイス終了用フック関数
// この関数はSTOPまたはEXITボタンが押された時に実行されます。
void ecrobot_device_terminate()
{
	// センサ、モータなどの各デバイスの終了関数を
	// ここで実装することができます。
	// ⇒　光センサ赤色LEDをOFFにする
	ecrobot_set_light_sensor_inactive(NXT_PORT_S3);
}

// 1msec周期割り込み(ISRカテゴリ2)から起動されるユーザー用フック関数
void user_1ms_isr_type2(void)
{
	// 今回は何も行わない
}

TASK(TaskMain)
{
	// オブジェクト間のリンクを構築する
	lineTracer.colorJudgement  = &colorJudgement;
	lineTracer.balanceRunner   = &balanceRunner;
	colorJudgement.lightSensor = &lightSensor;
	balanceRunner.gyroSensor   = &gyroSensor;
	balanceRunner.leftMotor    = &leftMotor;
	balanceRunner.rightMotor   = &rightMotor;
	
	startJudgement.touchSensor = &touchSensor;

	// 各オブジェクトを初期化する
	LineTracer_init(&lineTracer);
	ColorJudgement_init(&colorJudgement);
	BalanceRunner_init(&balanceRunner);
	LightSensor_init(&lightSensor, NXT_PORT_S3);
	GyroSensor_init(&gyroSensor, NXT_PORT_S1);
	Motor_init(&leftMotor, NXT_PORT_C);
	Motor_init(&rightMotor, NXT_PORT_B);
	
	StartJudgement_init(&startJudgement);
	TouchSensor_init(&touchSensor, NXT_PORT_S2);

	// 4ms周期で、スタート判定を依頼する
	while(!StartJudgement_judgeStart(&startJudgement)){
		systick_wait_ms(4);
	}
	
	// 4ms周期で、ライントレーサにトレース走行を依頼する
	while(1)
	{
		LineTracer_trace(&lineTracer);
		systick_wait_ms(4);
	}
}

