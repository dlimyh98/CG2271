#include "ultrasonicFunctions.h"

void startUltrasonic (void)
{
	// Begin pulsing the Ultrasonic Trigger @ 1Hz
	PIT->CHANNEL[0].TCTRL |= PIT_TCTRL_TEN_MASK;  
	
	// Ultrasonic Echo
	TPM0_C1SC |= TPM_CnSC_CHIE(1);  // enable Channel Interrupts
}
