#include <stdio.h>

int main() {
    printf("-------------------------------------\n");
    printf("Celsius To Fahrenheit Converter Table\n");
    printf("-------------------------------------\n");

    float fahr,celsius;
    float lower,upper,step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32.0;
        printf("%3.0f\t%6.1f\n",celsius,fahr);
        celsius = celsius + step;
    }
    return 0;
}


