#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

//Variable declaration
//---------------------------------------------------------------------
typedef unsigned int InNum;
int bits;

//Custom function declaration prototype
//---------------------------------------------------------------------
char *BinaryStr (InNum DecDigit);
char InputVal (char *Input);

//=====================================================================
//Here start main code 
//=====================================================================
int main(int argc,char* argv[])
{

   //Check for argument
   if(argv[1]==NULL){
        printf("Missing argument\n");
   }

   else{

        if(!InputVal(argv[1])){
            printf("Your input is not a decimal digit.\n");
        }

        else{
            InNum argDigit;
            argDigit = atoi(argv[1]);
            printf("The byte syze of InNum type is: %ld\n", sizeof(InNum));
            printf("%s\n",BinaryStr(argDigit));
        }
    }
    
    return 0;
}

//================================================================
//Here start custom function
//================================================================

//Function - convert input digit to binary value
//-----------------------------------------------------------------
char *BinaryStr (InNum  DecDigit){
    
    
    if(DecDigit <= 0xff){
        printf("\nThe input digit can be fitet in one byte. 8 bit\n");
    }
    
    else if(DecDigit <= 0xffff){
        printf("\nThe input digit can be fitet in two byte. 16 bit\n");
    }

    else if(DecDigit <= 0xffffff){
        printf("\nThe input digit can be fitet in three byte. 24 bit\n");
    }

    else if(DecDigit <= 0xfffffffe){
        printf("\nThe input digit can be fitet in four byte. 32 bit\n");
    }

    else{
        printf("\nThe digit is too long. The max size of converted number is: %u\n",0xfffffffe);
        return "Exit with no return\n";
    }
    
    char *Output = (char*)malloc(200);
    sprintf(Output, "Your number in hex is 0x%x", DecDigit);
    return Output;
}


//Function - validating input 
//-----------------------------------------------------------------
char InputVal (char *Input){

   //Return false if string is not a digit   
    while(*Input!='\0'){
        
        if(*Input > '9' || *Input < '0'){
            return FALSE;
            break;
        }
        Input++;
    }    
    return TRUE;   
}