#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
How to start program
Type in current floder FC 32 1000
So the you pass N = 32 and M = 1000
*/

int heads()
{
  return rand() < RAND_MAX/2;
}

int main(int argc, char *argv[])
{
  int i, j, cnt;
  int N = atoi(argv[1]), M = atoi(argv[2]);
  int *f = malloc((N+1) * sizeof(int));

  srand(time(NULL));

  for(i = 0; i <= N; i++) //Zero all heads ....heads mean ezi :)
    f[i] = 0;
 
  for(i = 0; i < M; i++, f[cnt]++){
    //printf("f[cnt] = %d \n",f[cnt]);
    for (cnt = 0, j = 0; j <= N; j++){
          if (heads()){
            cnt++;
          }
    printf("i=%d j=%d cnt=%d\n",i,j,cnt);
	      
    }
  }
    

  for (j = 0; j <= N; j++)
    {
      printf("%2d ", j);
      for (i = 0; i < f[j]; i+=10)
	    printf("*");
      printf("\n");
    }
  return 0;
}