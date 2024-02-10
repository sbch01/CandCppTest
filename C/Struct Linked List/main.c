#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Създаване на структура
//typedef създава тип променлива като структура
//coil е името на самата стъктура
typedef struct coil{

    unsigned int address; //адрес на бобината
    unsigned char value; //съдържа състоянието на бобината
    struct coil_t *next; //осигурява връзка към следващата променлива от тип coil_t

}coil_t;
//coil_t е името на променливата получена чрез typedef

int main(int argc, char const *argv[])
{

    //създаване на указател до променлива тип coil_t
    coil_t *Out1;

    //заделяне на динамична памет за бобина
    Out1 = (coil_t*)malloc(sizeof(coil_t));

    Out1->value = 1;
    
    printf("Hello test! %d \n", Out1->value);
    return 0;
}


