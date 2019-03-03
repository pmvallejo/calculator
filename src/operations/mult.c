	/*
 *	Header file
 */

/*******************************************************************************
 * INCLUDES
 ******************************************************************************/
#include <stdio.h>

/*******************************************************************************
 * USED INTERFACES
 ******************************************************************************/
#include <mult.h>

/*******************************************************************************
 * FUNCTION DEFINITION
 ******************************************************************************/
int mult(int a, int b)
{
	int ret = 0;

	/* Operation */
	ret = a * b;

	/* Return operation result */
	return ret;
}