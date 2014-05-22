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
	/* gener�tor n�hodn�ch ��sel je t�eba zinicializovat aby se generovala v�dy r�zn� posloupnost ��sel */
	DTGetTime_0.enable = 1;
	DTGetTime(&DTGetTime_0);
	
	srand(DTGetTime_0.DT1);
	
	/* n�sleduj�c� ��dek je pouze pro kontrolu, zda je prvn� je prvn� n�hod� ��slo v�dy jin� */
	firstNumber = rand();
}

void _CYCLIC rand1Cyclic(void)
{
	/* zavol�n�m tohoto ��dku se do "r" p�i�ad9 n�hodn� ��slo v rozsahu 1 a� 5 */
	r = 1 + rand() % 5;
}
