/*
Пример, в който се демонстрира преконфигуриране на оператори
Operator Overloading

Връщане на мроменлива от метод или функция чрез референция

Примера показва обект масив, който проверява и верефицира достъпа до неговите 
елементи

*/

#include <iostream>
using namespace std;
const int LIMIT = 20;

class SafeArray  {

  private:
 
  int array [LIMIT];

  public:

  int& access (int n){

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
   
      sa1.access(i) = i*5;
      
  }
  //изписване на всички членове на масива
  for (int i = 0;i<LIMIT;i++){
   
    int temp;

    temp = sa1.access(i);
    cout<<temp<<", ";
      
  }

  cout<<endl;

  //изваждане на конкретни членове на масива
  cout<<sa1.access(10)<<endl;
  //изввеждане на член, който не съществува
  cout<<sa1.access(30)<<endl;
  return 0;

}

