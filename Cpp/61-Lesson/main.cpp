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

};


int main(){

    cNum number1;

    cout<<"number1 = ";
    number1.print_cNum();
    cout<<endl;
    number1.set_cNum(3.123,7.3243);
    cout<<"number1 = ";
    number1.print_cNum();
    cout<<endl;
    return 0;

}

