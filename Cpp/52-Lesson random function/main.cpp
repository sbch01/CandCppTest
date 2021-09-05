
#include <iostream>
// Библиотека нужна за рандом генериране на числа 
#include <cstdlib>  //for srand(), rand()
using namespace std;


/*
Пример, в който се демонстрира работата на random функции
*/


int main()
{
    int RandNum;
    //Ако не сложим в този ред ще генерираме една и съща поредица от 
    //произволни числа
    srand(time(NULL));

    //Следващия цикъл симулира теглене на числата 5 от 35 като тото :)
    //Подрежда в редица 5 числа от 35 възможни числата от 1 до 35
    
    for(int i=0; i < 5; i++){
        RandNum = (rand() % 35) +1  ; //тъй като функцията генерира числа от 0 до RAND_MAX
        cout<< RandNum<<", ";
    }


    //Тест на модулно деление и как работи
    /* 
    for (int i=0;i<50;i++){
        cout<< i% 5 <<", ";
    }
     */

    cout<<endl;
   
  
    return 0;
}

