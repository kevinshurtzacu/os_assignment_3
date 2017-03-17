#ifndef __CLOCK_H__
#define __CLOCK_H__

#include "kernel/kernel.h"
#include "arch_clock.h"

/* recent_time is a millisecond counter; it resets every five seconds and is
 * used for adaptive scheduling.  recent_time is set in init_clock in clock.c.
 *
 * RECENT_RESET is a true / false flag used to signal when it is time to reset
 * the "recent runtime" counters in the process table.  1 = TRUE, 0 = FALSE
 *
 * Responsibility for reading and resetting the RECENT_RESET flag is delegated
 * to proc.c in the scheduling functions
 */
extern u64_t recent_time;
extern int RECENT_RESET;

int boot_cpu_init_timer(unsigned freq);
int app_cpu_init_timer(unsigned freq);

int timer_int_handler(void);

int init_local_timer(unsigned freq);
/* stop the local timer ticking */
void stop_local_timer(void);
/* let the time tick again with the original settings after it was stopped */
void restart_local_timer(void);
int register_local_timer_handler(irq_handler_t handler);

u64_t ms_2_cpu_time(unsigned ms);
unsigned cpu_time_2_ms(u64_t cpu_time);

#endif /* __CLOCK_H__ */
