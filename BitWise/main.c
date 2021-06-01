#include <stdio.h>
#include <stdlib.h>

/*Here add some coments to */
//Complie Control:
//==================================================================
#define SHIFT_TEST

char *NumTo_BinString (char Number);

//This Function Convert Number to Binary and plot it in String
//You can also change the type of Number as int, double and so on
char *NumTo_BinString (char Number){
    
    //static char StrByte[(8*(sizeof(Number)))];//Chartar array contain the converted number
    
    
    char *StrBytePtr = (char *)malloc(8*sizeof(Number)+1); //Dinamicly allocated pointer
    
        for(int i = 0; i <= (8*sizeof(Number)); i++){
            
            //Rotate Number     Check MSB with this bit filter and &
            if((Number << i) & 0x80) {
                StrBytePtr [i] = '1';
            }
            else{
                StrBytePtr [i] = '0';
            }
        }
        StrBytePtr [8*sizeof(Number)] = '\0';
    
    
    return StrBytePtr;
    free(StrBytePtr); //Clear dinamic memory
}



int main(void)


{         
     
    char A = 0b11001010,B = 0b00101100;  
    
    #ifdef SHIFT_TEST
    
        printf("Here is 8 times left shift of 0x01:\n");
        
            for(int i=0;i<8;i++){
                printf("A->: 0b%s\n",NumTo_BinString(0x01<<i));    
            }
    
    #else
        
        //AND Function Example
        printf("A AND B\n");
        printf("----------------------\n");
        printf("A->: 0b%s\n",NumTo_BinString(A));
        printf("B->: 0b%s\n",NumTo_BinString(B));
        printf("A&B: 0b%s\n",NumTo_BinString(A&B));
        printf("----------------------\n");
        
        //OR Function Example
        printf("A OR B\n");
        printf("----------------------\n");
        printf("A->: 0b%s\n",NumTo_BinString(A));
        printf("B->: 0b%s\n",NumTo_BinString(B));
        printf("A|B: 0b%s\n",NumTo_BinString(A|B));
        printf("----------------------\n");
        
        //XOR Function Example
        printf("A XOR B\n");
        printf("----------------------\n");
        printf("A->: 0b%s\n",NumTo_BinString(A));
        printf("B->: 0b%s\n",NumTo_BinString(B));
        printf("A^B: 0b%s\n",NumTo_BinString(A^B));
        printf("----------------------\n");
        
         //NOT Function Example
        printf("NOT A\n");
        printf("----------------------\n");
        printf("A->: 0b%s\n",NumTo_BinString(A));
        printf("~A : 0b%s\n",NumTo_BinString(~A));
        
        
    #endif


    return 0;
}
