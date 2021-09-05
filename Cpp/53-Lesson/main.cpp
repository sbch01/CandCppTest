/*
Пример, в който се демонстрира ограничаване на стринга
*/

#include <iostream>
// Библиотека нужна за ограничаването на въвеждания стринг 
#include <iomanip>  //for setw
using namespace std;

const int MAX = 5;
char inputstring[20];
int main()
{
   

    /*
    Много е важно, че функция setw(n) ограничава въвеждането
    като в n влиза и терминитащия символ \0 при извикване на 
    програмата въведете стринг с повече от 5 символа
     */
   cout<<"Enter your string: ";
   cin>>setw(MAX)>>inputstring;

   cout<<inputstring<<endl;
  
    return 0;
}

