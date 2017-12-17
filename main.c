#include <stdio.h>

int main(int argc, const char * argv[]) {
    float t;
    char system;
    sscanf(argv[1], "%f", &t);
    sscanf(argv[2], "%c", &system);
    switch (system) {
        case 'C': //Celsi do
            if (t > -273.15)
            {
                printf("C - %.2f\n", t);
                printf("K - %.2f\n", t+273.15);
                printf("F - %.2f\n", t*1.8 + 32);
            }
            else {printf("The input temperature is below absolute zero\n");} //Phisics Error
            break;
        case 'c':
            if (t > -273.15)
            {
                printf("C - %.2f\n", t);
                printf("K - %.2f\n", t+273.15);
                printf("F - %.2f\n", t*1.8 + 32);
            }
            else {printf("The input temperature is below absolute zero\n");}
            break;
        case 'K': //Kelvin do...
            if (t > 0)
            {
                printf("C - %.2f\n", t - 273.15);
                printf("K - %.2f\n", t);
                printf("F - %.2f\n", 1.8*(t - 273)+32);
            }
            else {printf("The input temperature is below absolute zero\n");}
            break;
        case 'k':
            if (t > 0)
            {
                printf("C - %.2f\n", t - 273.15);
                printf("K - %.2f\n", t);
                printf("F - %.2f\n", 1.8*(t - 273)+32);
            }
            else {printf("The input temperature is below absolute zero");}
            break;
        case 'F': //Faren do...
            if (t > -459.67)
            {
                printf("C - %.2f\n", (t-32)*0.55);
                printf("K - %.2f\n", ((t-32)/1.8)+273.15);
                printf("F - %.2f\n", t);
            }
            else {printf("The input temperature is below absolute zero\n");}
            break;
        case 'f':
            if (t > -459.67)
            {
                printf("C - %.2f\n", (t-32)*0.55);
                printf("K - %.2f\n", ((t-32)/1.8)+273.15);
                printf("F - %.2f\n", t);
            }
            else {printf("The input temperature is below absolute zero");} //Input Error
            break;
        default:
            printf("Invalid input - selected number system Celsius\n");
            if (t > -273.15)
            {
                printf("C - %.2f\n", t);
                printf("K - %.2f\n", t+273.15);
                printf("F - %.2f\n", t*1.8 + 32);
            }
            else {printf("The input temperature is below absolute zero\n");}
            break;
    }
    return 0;
}

