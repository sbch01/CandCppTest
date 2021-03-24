/*==============================================================================
Тази програма деминстрира подаване на аргументи с извикването на самата програма
За да тествате програмата компилирай с gcc main.c -o main

Пробвай два варианта на повикване на програмата:
./main arg1 arg2 arg3 arg4
./main "arg1 arg2 arg3 arg4"
================================================================================*/
#include<stdio.h>
  
int main(int argc,char* argv[])
{
    int counter; //Променлива използвана за цикъл, чрез който да се отпечатат всички аргументи

    printf("Program Name Is: %s",argv[0]); //Нулевия аргумент е името на програмата 

    if(argc==1) //Ако аргумента е само един, това означава, че няма друг аргумент освен името на програата
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    
    if(argc>=2) //Аргументите са повече от един
    {
        printf("\nNumber Of Arguments Passed: %d",argc); //Отпечатване на броя на аргументите
        printf("\n----Following Are The Command Line Arguments Passed----"); 
        
        for(counter=0;counter<argc;counter++) //Цикъл чрез, който се отпечатват всички аргументи 
            printf("\nargv[%d]: %s",counter,argv[counter]);
        printf("\n");
    }
    return 0;
}