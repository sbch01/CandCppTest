
// passing value by reference
#include <iostream>
using namespace std;

/*
Пример при който се показва как една функция в C++ има аргументи по подразбиране
*/
void drawLine(char ch='*',int num=40);

int main()
{
    
    drawLine();
    drawLine('+');
    drawLine('*',20);
    
  
    return 0;
}

//Custom function part
//--------------------------------------------------------------
// intfrac()
// finds integer and fractional parts of real number
void drawLine (char ch,int num){

    for (int i=1;i<num;i++){
        cout<<ch;
    }
    cout<<endl;
}