#include "adc.h"

void adc_init()
{
    /*AVcc = +5V = Vref*/
    ADMUX = 1<<REFS0;   

    /* Enable ADC and set Prescalr to 2 */
    ADCSRA = (1<<ADEN)|(7<<ADPS0);
}
