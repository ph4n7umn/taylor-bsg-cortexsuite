/*
 * rbm.h
 *
 *  Created on: Jun 3, 2013
 *      Author: Enrico
 */


double rand_lfsr(void);
double rand_twister(void);




/*Timing Function*/
unsigned int* photonEndTiming();
unsigned int* photonStartTiming();
unsigned int* photonReportTiming(unsigned int* startCycles,unsigned int* endCycles);
void photonPrintTiming(unsigned int * elapsed);






