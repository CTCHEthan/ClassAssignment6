#include <stdio.h>
#include <stdlib.h>
#include "tempConvert.h"


int main()
{

    printf("Enter temperature in Celsius ");

    float tempC;
    scanf("%f", &tempC);

    float tempF;
    //tempF = convertTemperature(tempC);
    tempF = convertTemperature(tempC);

    printf("Temperature in Fahrenheit %f", tempF);

    return 0;
}
