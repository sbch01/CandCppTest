/*
В следния пример се разглеждат примери с указатели

*/

#include <iostream>
using namespace std;






/////////////////////////////////////////////////////////////////
//                  MAIN
/////////////////////////////////////////////////////////////////
int main(){

int a = 11,b=34,c=88;
char symbol;
float Value;

//void указател е като универсале, може да приема адреси на всякакъв тип променливи
void * ptr;

//указател който може да съдържа адрес на променлива от тип int
int* ptr_int = NULL;

cout<<"Addres of a: "<<&a<<endl
    <<"Addres of b: "<<&b<<endl
    <<"Addres of c: "<<&c<<endl;

ptr = &symbol;
cout<<"First void pointer value: "<<ptr<<endl;
ptr = &Value;
cout<<"Second void pointer value: "<<ptr<<endl;
ptr = &a;
cout<<"Third void pointer value: "<<ptr<<endl;


//стойност на нулев пойнтер
cout<<endl<<"Null int pointer contain: "<<ptr_int<<endl;

}

