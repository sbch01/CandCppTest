/*
В следния пример се разглеждат примери с указатели

Конкретния пример показва масив от променливи и как 
името на масива има поведението на указател 
*/

#include <iostream>
using namespace std;


/////////////////////////////////////////////////////////////////
//                  MAIN
/////////////////////////////////////////////////////////////////
int main(){

    int intArray[] = {10,15,3434,3545,568};

     cout<<"Value"<<"\t\t"<<"Address:"<<endl;
      cout<<"--------------------------------"<<endl;


    for (int i = 0; i<5; i++){
        //този ред показва как името на масива служи като указател 
        cout<<*(intArray+i)<<"\t\t"<<&(intArray[i])<<endl;
    }

}
