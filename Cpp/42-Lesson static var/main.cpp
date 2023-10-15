
// first class example
#include <iostream>
using namespace std;

/*
Пример при който се показва как ключовота сума static
превръща променлива в един клас обща за всички останали
*/

class MyClass {

    private:

        int number;
        char tag;

    public:

        static int st_number;

        void setclass_ssettings(int num,char tg){
          number = num;
          tag = tg;  
        }

        void print(void){
            cout<<"Here is Class parameters:"<<endl
            <<"number: "<<number<<" static number: "<<st_number<< " charter: "<<tag<<endl;
        }

        void incNumb(void){
            number++  ; 
        }

        

        //конструктор на каласа вкарва параметри при извикването на класа
        MyClass () :   number(0), tag('_')
        {st_number++;}
 
};

//!!!! ВАЖНО
//Трябва да се декларира статичнта променлива извън класаа
//в противен случай не може да се компилира
int MyClass::st_number = 0; 

int main()
{
    //създаване на променлива от тип MyClass
    MyClass first;
    first.print();

    MyClass second;
    second.print();

    MyClass third;
    third.print();
  
    return 0;
}

