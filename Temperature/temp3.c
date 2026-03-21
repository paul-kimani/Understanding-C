#include <stdio.h>
/* To print the Farenheit to Celsius Table*/

int main(){
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        /* code */
        printf("%3d, %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    
}