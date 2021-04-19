/*
 * decls.h
 * 
 * Pull in all other header files in an orderly fashion. Source files include
 * only this header, and only once.
 * 
 * Written & released by Keir Fraser <keir.xen@gmail.com>
 * 
 * This is free and unencumbered software released into the public domain.
 * See the file COPYING for more details, or visit <http://unlicense.org>.
 */

#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>

#include "util.h"
#include "mcu/stm32/common_regs.h"
#include "mcu/stm32/common.h"
#if MCU == STM32F1
#include "mcu/stm32/f1_regs.h"
#include "mcu/stm32/f1.h"
#elif MCU == STM32F7
#include "mcu/stm32/f7_regs.h"
#include "mcu/stm32/f7.h"
#elif MCU == AT32F415
#include "mcu/at32/f415_regs.h"
#include "mcu/at32/f415.h"
#endif
#include "intrinsics.h"

#include "time.h"
#include "timer.h"
#include "usb.h"
#include "cdc_acm_protocol.h"

/*
 * Local variables:
 * mode: C
 * c-file-style: "Linux"
 * c-basic-offset: 4
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 */
