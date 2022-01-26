#include "stdint.h"
#include "memio.h"
#include "Interrupt.h"
#include "HalInterrupt.h"
#include "armcpu.h"

extern volatile GicCput_t * GicCpu ;
extern volatile GicDist_t * GicDist ;

static InterHdlr_fptr sHandlers[INTERRUPT_HANDLER_NUM] ;

void Hal_interrupt_init (void)
{
	GicCpu->cpucontrol.bits.Enable = 1 ;
	GicCpu->prioritymask.bits.Prioritymask = GIC_PRIORITY_MASK_NONE ;
	GicDist->distributorctrl.bits.Enable = 1 ;

	for (uint32_t i = 0; i < INTERRUPT_HANDLER_NUM; i++)
	{
		sHandlers[i] = 0x0 ;
	}

	enable_irq() ;
}

void Hal_interrupt_enable (uint32_t interrupt_num)
{
	
void Hal_interrupt_disable (uint32_t interrupt_num) ;
void Hal_interrupt_register_handler (InterHdlr_fptr handler, uint32_t interrupt_num) ;
void Hal_interrupt_run_handler (void) ;
