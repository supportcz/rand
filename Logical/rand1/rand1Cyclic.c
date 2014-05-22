/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Program: rand1
 * File: rand1Cyclic.c
 * Author: vancurar
 * Created: May 22, 2014
 ********************************************************************
 * Implementation of program rand1
 ********************************************************************/

#include <bur/plctypes.h>
#include <stdlib.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT rand1Init(void)
{
	/* generátor náhodných èísel je tøeba zinicializovat aby se generovala vždy rùzná posloupnost èísel */
	DTGetTime_0.enable = 1;
	DTGetTime(&DTGetTime_0);
	
	srand(DTGetTime_0.DT1);
	
	/* následující øádek je pouze pro kontrolu, zda je první je první náhodé èíslo vždy jiné */
	firstNumber = rand();
}

void _CYCLIC rand1Cyclic(void)
{
	/* zavoláním tohoto øádku se do "r" pøiøad9 náhodné èíslo v rozsahu 1 až 5 */
	r = 1 + rand() % 5;
}
