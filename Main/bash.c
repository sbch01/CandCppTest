#include <stdio.h>

//Как да пайпваме аргументи 
//https://stackoverflow.com/questions/48971130/how-to-pipe-a-c-program-that-takes-in-arguments
int main() 
{
    char str[200];
    int i;
    scanf("%s", str);
    scanf("%d", &i);
    printf("%s %d\n", str, i);
}  