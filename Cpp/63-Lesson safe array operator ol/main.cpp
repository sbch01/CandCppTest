/*
Пример, в който се демонстрира преконфигуриране на оператори
Operator Overloading

Връщане на мроменлива от метод или функция чрез референция

Примера показва обект масив, който проверява и верефицира достъпа до неговите 
елементи

В този пример ще се осъществи и преформатиране на оператор, така че да изглежда 
контролирането на масива като обикновен масив

*/

#include <iostream>
using namespace std;
const int LIMIT = 20;

class SafeArray  {

  private:
 
  int array [LIMIT];

  public:

  //връщне на променлива с референция
  //pass value by refference 
  int& operator[] (int n){

    if (n<0 || n>LIMIT){
        cout << "No proper index of array"<<endl;
        exit(0);
    }

    return array[n];
  }
  
};


int main(){

SafeArray sa1; //Създаваме обект масив 


  //зареждане на масива с данни
  for (int i = 0;i<LIMIT;i++){
   
      sa1[i] = i*5;
      
  }
  //изписване на всички членове на масива
  for (int i = 0;i<LIMIT;i++){
   
    int temp;

    temp = sa1[i];
    cout<<temp<<", ";
      
  }

  cout<<endl;

  //изваждане на конкретни членове на масива
  cout<<sa1[9]<<endl;
  //изввеждане на член, който не съществува
  cout<<sa1[30]<<endl;
  return 0;

}

