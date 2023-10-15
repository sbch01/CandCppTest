/*demonstrates static cast */

// cast.cpp
// tests signed and unsigned integers
#include <iostream>
using namespace std;

int main()
{

cout << sizeof(int)<<endl<<sizeof(double)<<endl;

<<<<<<< HEAD:Cpp/13-Lesson/main.cpp
int intVar = 1500000001; //1,500,000,000
=======
unsigned int intVar = 3700000000; //1,500,000,000
>>>>>>> cc8ec0a6b7441e9a3efcd11860a33f2a056fd3cc:Cpp/13-Lesson static_cast/main.cpp
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