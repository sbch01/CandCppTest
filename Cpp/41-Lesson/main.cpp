
// first class example
#include <iostream>
using namespace std;

/*
Пример при който се показва как се дефинира клас в C++ 
как се създава конструктор на класа ред 30
*/

class MyClass {

    private:

        int number;
        char tag;

    public:

        void setclass_ssettings(int num,char tg){
          number = num;
          tag = tg;  
        }

        void print(void){
            cout<<"Here is Class parameters:"<<endl
            <<"number: "<<number<<" charter: "<<tag<<endl;
        }

        //конструктор на каласа вкарва параметри при извикването на класа
        MyClass () : number(0), tag('_')
        {}
 
};

int main()
{
    //създаване на променлива от тип MyClass
    MyClass newObj1;
    //създаване на указател към MyClass
    MyClass *pObj;

    pObj = &newObj1;

    //Отпечатване на стойностите на параметрите на класа след неговото създаване
    //трябва да са параметрите зададени чрез конструктора ред 30 от настоящия код
    newObj1.print();

    //Промяна на стойностите в класа
    newObj1.setclass_ssettings(56,'a');
    //Ново отпечатване
    newObj1.print();
    
    pObj->print();
    
  
    return 0;
}

