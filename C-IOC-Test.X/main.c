
#include <xc.h>
#include "main.h"
#include "clock.h"
#include "gpio.h"
#include "ioc.h"

void main(void) {
    
    /* System Clock Initialization */
	CLOCK_Initialize();
    
    /* Config PortA */
    PortA_Initialize();
    
    /* Config PortB */
    PortB_Initialize();

    /* Config PortC */
    PortC_Initialize();
    
    /* Config PortD */
    PortD_Initialize();
    
    /* Config PortE */
    PortE_Initialize();
    
    /* Config PortF */
    PortF_Initialize();

    /* Config IOC */
    IOC_Initialize();
        
    /* Enable interrupts */
    ei();
    
    /* infinite loop */
    while(1)
    {
        
              
     } /* while */
        
    
    return;
} /* main*/