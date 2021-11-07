


/* 
Нови уроци свързани с динамично заделяне на памет

 */
#include <iostream>
#include <cstring>
using namespace std;


class Person {

public:

    char  Name[20];
    int age;

Person(){
    cout<<"The new object is born"<<endl;
    strcpy(Name,"User");
    age = 0;

}

~Person(){
    cout <<"Name: "<< Name<<endl;
    cout <<"Age: "<< age<<endl;
    cout<<"The new object is gone"<<endl;
}




};


int main(){

    Person Ivan;

    //Ivan.GetPersData("Ivan",46);

   
return 0;
}
