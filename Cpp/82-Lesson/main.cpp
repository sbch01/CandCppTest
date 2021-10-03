/*
В следния пример се разглеждат примери с указатели
Както и дефинирането на стринг като указател
*/

#include <iostream>
using namespace std;


/////////////////////////////////////////////////////////////////
//                  MAIN
/////////////////////////////////////////////////////////////////
int main(){


    //декларираме стринг като масив
    char Mystring1[]= "-This is pointers test";
    
    //декларираме стринг като указател към първия елемент от стринга, нужно е да се ползва const
    const char* Mystring2 = "-This is another pointer test"; //пробвай без const, компилатора дава грешка
    


    //бенефициента е че можем да отместваме указателя и така да показваме желана част от стринга
    cout <<Mystring2<<endl;
    cout <<++Mystring2<<endl;

    cout <<Mystring1<<endl;

    //откоментирай долния ред за да видиш, че няма да може да се компилира
    //cout <<++Mystring1<<endl; //тук няма да можем да се компилира


}