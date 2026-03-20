#include <stdio.h>

/*
We want to include a header in our table that converts the FARENHEIT SCALE TO CELSIUS SCALE
*/

int main(){
    float fahr, celsius;

    float upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;

    printf("This is a table converting temperature from Farenheit to celsius\n");


    while (fahr<=upper)
    {
        /* code */
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f,%6.0f\n", fahr, celsius);

        fahr = fahr + step;

    }
    
}