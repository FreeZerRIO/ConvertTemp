//
//  main.c
//  Temperature Convert
//
//  Created by Алексей Баринов on 14.10.2017.
//  Copyright © 2017 Era Company. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float t;
    char system;
    sscanf(argv[1], "%f", &t);
    sscanf(argv[2], "%c", &system);
    switch (system) {
        case 'C': //Если выбран Цельсий
            if (t > -273.15)
        {
            printf("C - %.2f\n", t);
            printf("K - %.2f\n", t+273.15);
            printf("F - %.2f\n", t*1.8 + 32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");} //Ошибка нарушения правил физики
            break;
        case 'c': //Если выбран Цельсий
            if (t > -273.15)
        {
            printf("C - %.2f\n", t);
            printf("K - %.2f\n", t+273.15);
            printf("F - %.2f\n", t*1.8 + 32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
        case 'K':
            if (t > 0)
        {
            printf("C - %.2f\n", t - 273.15);
            printf("K - %.2f\n", t);
            printf("F - %.2f\n", 1.8*(t - 273)+32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
        case 'k':
            if (t > 0)
        {
            printf("C - %.2f\n", t - 273.15);
            printf("K - %.2f\n", t);
            printf("F - %.2f\n", 1.8*(t - 273)+32);
        }
            else {printf("Вводимая температура ниже абсолютного нуля");}
            break;
        case 'F':
            if (t > -459.67)
        {
            printf("C - %.2f\n", (t-32)*0.55);
            printf("K - %.2f\n", ((t-32)/1.8)+273.15);
            printf("F - %.2f\n", t);
        }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
        case 'f':
            if (t > -459.67)
        {
            printf("C - %.2f\n", (t-32)*0.55);
            printf("K - %.2f\n", ((t-32)/1.8)+273.15);
            printf("F - %.2f\n", t);
        }
            else {printf("Вводимая температура ниже абсолютного нуля");}
            break;
        default:
            printf("Неверный ввод - выбрана с.с. цельсий\n");
            if (t > -273.15)
            {
                printf("C - %.2f\n", t);
                printf("K - %.2f\n", t+273.15);
                printf("F - %.2f\n", t*1.8 + 32);
            }
            else {printf("Вводимая температура ниже абсолютного нуля\n");}
            break;
    }
    return 0;
}
