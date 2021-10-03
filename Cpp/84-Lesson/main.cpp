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
const int Myvar = 200;

const int* IntVar1;
//int* const *IntVar2 = 3 ;


//IntVar2++;


cout<<Distance<<endl;

cnvToInch(&Distance);

cout<<Distance<<endl;
  

}


void cnvToInch (float* ptrLength){

    *ptrLength /= 2.54;
}