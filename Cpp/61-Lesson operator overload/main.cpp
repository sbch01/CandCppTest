/*
Пример, в който се демонстрира преконфигуриране на оператори
Operator Overloading
*/

#include <iostream>
using namespace std;

class cNum  {

  private:
  float real;
  float img;

  public:

  //Метод за въвеждане на реална и имагинерна част на комплескно число
  void set_cNum(float r,float im){
    real = r;
    img = im;
  }

  //Метод за отпечатване на комплексно число
  void print_cNum(){
    if (img<0){
      cout<<real<<" - i"<<(img*-1);
    }
    else 
      cout<<real<<" + i"<<img;
  }

  cNum () { //Deafult constructor
  real = 0;
  img = 0;
  }

  cNum (float r, float i) {//Second constructor
    real =r;
    img =i;

  }

  // Дефиниране на оператор
  cNum operator+ (cNum input){

    cNum res;

    res.real = input.real + real;
    res.img = input.img + img;
    
    return res;
  }

};


int main(){

    // Инициализиране на променливи
    cNum number1(12,7),number2,number3;

    //Отпечатване на променлива number1 проверка, че работи втория конструктор
    number1.print_cNum();
    cout<<endl<<endl;

    //Зареждане на нови променливи
    number1.set_cNum(3.123,7.3243);
    cout<<"number1 = "; //отпечатване
    number1.print_cNum();
    cout<<endl;
    
    number2.set_cNum(2.5,1.3);
    
    cout<<"number2 = ";
    number2.print_cNum();
    cout<<endl;

    //Пресмятане на комплексни числа чрез предефиниране на оператор
    //Operator overloa
    number3 = number1 + number2;

    //Отпечатване на крайния резултат
    cout<<"number3 = ";
    number3.print_cNum();
    cout<<endl;

    return 0;

}

