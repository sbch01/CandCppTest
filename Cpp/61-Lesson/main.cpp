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

  void set_cNum(float r,float im){
    real = r;
    img = im;
  }

  void print_cNum(){
    if (img<0){
      cout<<real<<" - i"<<(img*-1);
    }
    else 
      cout<<real<<" + i"<<img;
  }

  cNum () {
    real = 1;
    img = -1;
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

    cNum number1,number2,number3;


    number1.set_cNum(3.123,7.3243);
    cout<<"number1 = ";
    number1.print_cNum();
    cout<<endl;
    
    number2.set_cNum(2.5,1.3);
    
    cout<<"number2 = ";
    number2.print_cNum();
    cout<<endl;

    number3 = number1 + number2;

    cout<<"number3 = ";
    number3.print_cNum();
    cout<<endl;

    return 0;

}

