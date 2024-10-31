
#include <xc.h>
#include "ioc.h"

void IOC_Initialize(void)
{
    /* Clear the bit IOCIF by clearing all bits in IOCxF register  */
    IOCCF = 0x00; 
    
    /* Interrupt-on-change enabled */
    PIE0 = 0x80;

    /* Interrupt on change enabled on RC7 (falling edge) */
    IOCCN = 0x80;    
}

void __interrupt(__irq(IRQ_IOC)) IOC_ISR(void) 
{
        /* Toggle RF3 pin */
        LATF ^= 0x08;
           
        /* Clear the bit IOCIF by clearing all bits in IOCxF register  */
        IOCCF = 0x00; 
            
}
