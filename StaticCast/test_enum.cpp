#include <stdio.h>
#include <stdlib.h>
/*
This example show how unary operators 'static_cast' work the links below: 
https://en.cppreference.com/w/cpp/language/static_cast
https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
*/

/*
VERY IMPORTANT!!!
*/

/*
Add More Comment!!
*/

int RndDig, cnt;
int ind;

enum  MyCondition  { Con1, Con2, Con3} Condition;

int main(){
  
    for(int i=0; i < 5; i++ ){
        printf("Condition %d\n",Condition +1);
        //Calculate next enum                  Calculation    This part return to first member
        Condition = static_cast<MyCondition>((Condition+1) % (Con3 + 1));   
    }
    return 0;
}

