/*
В следния пример се разглеждат примери с указатели

Подаването на указател на функция
*/

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
// Function prototype
/////////////////////////////////////////////////////////////////

void cnvToInch (float*);

/////////////////////////////////////////////////////////////////
//                  MAIN
/////////////////////////////////////////////////////////////////
int main(){

    float Distance = 100;
    int const Myvar = 200;


    cout<<Distance<<endl;

    cnvToInch(&Distance);

    cout<<Distance<<endl;
}


void cnvToInch (float* ptrLength){

    *ptrLength /= 2.54;
}


/* 
тук е разяснено подробно използването на константи и указатели - кое след кое 
https://stackoverflow.com/questions/1143262/what-is-the-difference-between-const-int-const-int-const-and-int-const

int* - pointer to int
int const * - pointer to const int
int * const - const pointer to int
int const * const - const pointer to const int
Now the first const can be on either side of the type so:

const int * == int const *
const int * const == int const * const
If you want to go really crazy you can do things like this:

int ** - pointer to pointer to int
int ** const - a const pointer to a pointer to an int
int * const * - a pointer to a const pointer to an int
int const ** - a pointer to a pointer to a const int
int * const * const - a const pointer to a const pointer to an int

Примери обясняващи правилото  на  въртеното по часовниката стрелка
https://www.geeksforgeeks.org/clockwise-spiral-rule-in-c-c-with-examples/
http://c-faq.com/decl/spiral.anderson.htmlщ

Този е най-разбираем :)
https://riptutorial.com/c/example/18833/using-the-right-left-or-spiral-rule-to-decipher-c-declaration

*/
