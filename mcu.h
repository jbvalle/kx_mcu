#ifndef MCU_H
#define MCU_H
#include "cfg_mcu.h"

#if defined(MCU_STM32F401RE)
#include "stm32f401re_regs.h"
#elif defined(MCU_STM32F429ZI)
#include "stm32f429zi_regs.h"
#elif defined(MCU_STM32F407VGT6)
#include "stm32f407_regs.h"
#endif

#endif

