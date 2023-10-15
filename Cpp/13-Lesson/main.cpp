/*demonstrates static cast */

// cast.cpp
// tests signed and unsigned integers
#include <iostream>
using namespace std;

int main()
{

cout << sizeof(int)<<endl<<sizeof(double)<<endl;

int intVar = 1500000001; //1,500,000,000
intVar = (intVar * 10) / 10; //result too large
cout << "intVar = " << intVar << endl; //wrong answer

intVar = 1500000001; //cast to double
intVar = (static_cast<double>(intVar) * 10) / 10;
cout << "intVar = " << intVar << endl; //right answer

/*
 float f = 3.6;
    int a = f; // this is how you do in C
    int b = static_cast<int>(f);
    cout << b <<endl;
*/
return 0;
}