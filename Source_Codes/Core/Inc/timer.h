/*
 * timer.h
 *
 *  Created on: Sep 22, 2025
 *      Author: LENOVO
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int time);
void setTimer2(int time);

void timerRun();

#endif /* INC_TIMER_H_ */
