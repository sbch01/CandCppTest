/*demonstrates setw manipulator */

const char sw1 = 7, sw2 =12 ;

#include <iostream>
#include <iomanip> // for setw

using namespace std;

int main () {

    long pop1=2425785, pop2=47, pop3=9761;

    cout << setw(sw1) << "LOCATION" << setw(sw2)
    << "POPULATION" << endl
    << setw(sw1) << "Portcity" << setw(sw2) << pop1 << endl
    << setw(sw1) << "Hightown" << setw(sw2) << pop2 << endl
    << setw(sw1) << "Lowville" << setw(sw2) << pop3 << endl;
    return 0;

}