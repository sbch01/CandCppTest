
/*Това е пример за действието на функциите в библиотеката <string.h>*/
#include <stdio.h>
#include <string.h>


char chart1='a',chart2='A';
char SoureStr[]="Stoian";
char DestStr[20]="Petra";

int main () {

    //strlen връща дължината на стринга
    printf("The lenght of Source string is %lu \n",strlen(SoureStr));

    //strcat събира два стринга и ги напъхва в стринга на дестинацията
    printf("%s\n",strcat(DestStr," Banchev"));

    printf("%s\n",DestStr); //before copy

    strcpy(DestStr,SoureStr); //copy str

    //Стринг след копирането
    printf("%s \n",DestStr); //after copy

   
    //Сравняване на стрингове, които са еднакви
    printf("This is iniger return from same string: %i\n",strcmp("Name","Name"));

    //Сравняване на стрингове, които са различни                    s1      s2
    printf("This is iniger return from difrent string: %i\n",strcmp("Name","Nameaklaks"));
    //ако s1<s2 връща -1 ако s1>s2 връща 1


    printf("This is charter \"b\"-\"B\" = %d\n",'b'-'B');
    
    return 0;
}