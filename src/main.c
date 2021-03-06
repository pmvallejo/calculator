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
#include <sum.h>
#include <subt.h>
#include <mult.h>

/*******************************************************************************
 * FUNCTION DEFINITION
 ******************************************************************************/
int main(void)
{
	int a = 2;
	int b = 3;
	int c = 0;

	/* Perform addition */
	c = sum(a, b);

	/* Print result */
	printf("c = %d\n", c);

	/* Perform addition */
	c = subt(a, b);

	/* Print result */
	printf("c = %d\n", c);

	/* Perform multiplication */
	c = mult(a, b);

	/* Print result */
	printf("c = %d\n", c);

	return 0;
}