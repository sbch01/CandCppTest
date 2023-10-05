/* Some calculation expressions */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Следващите редове показва инкрементирането как се извършва преди и след 
    //отпечатването на екрана
    int count = 10;
    cout << "count=" << count <<endl;
    cout << "count=" << ++count <<endl; //prefix
    cout << "count=" << count++ <<endl; //postfix
    cout << "count=" << count <<endl;

    double number, answer;
    cout << "Enter a number: ";
    cin >> number;
    answer = sqrt(number);
    cout << "Square root is "
    << answer << endl;

    return 0; 
}