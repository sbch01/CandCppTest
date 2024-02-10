

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RndDig, cnt;

  enum MyCondition{ Con1, Con2, Con3} Condition = Con1;

  int main(int ind){
  
  Condition++;

  cnt = 0;
  srand(time(NULL));

  for(ind=0;ind<1000;ind++){
    
    RndDig = rand() % 2;
    if(RndDig) cnt++;
    printf ("Your random Number is: %d \n",RndDig);  
  } 
  
  printf("Total Ones is: %d", cnt );
  return 0;
}