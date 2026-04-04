#include <stdio.h>

/* To define the variables*/

#define LOWER 0 /* the lower linit of thne table*/
#define UPPER 300 /*to define the upper value of the table*/
#define STEP 20 /*the step size */

/* to print the farenheit table */

int main()
{

    int fahr ;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP )
    {
        printf("%3d, %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    
    return 0;
}
