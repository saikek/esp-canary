#pragma once
#ifndef _REPORTING_H_
#define _REPORTING_H_

#include "Arduino.h"
#include "../user_config.h"

void notifyAttackOccurred(String attackerIpAddress);
void notify(String message);
void resetAttackState();
void initReporting();
void notifyLoop();

#endif