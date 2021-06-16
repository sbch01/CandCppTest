// showprim.cpp
// displays prime number distribution
#include <iostream>
#include <stdio.h>
//#include <string.h>
//#include <conio.h> //for getche()

using namespace std;
int main()
{
    const unsigned char WHITE = 0x31; //solid color (primes)
    const unsigned char GRAY = 0x30; //gray (non primes)
    unsigned char ch;
    
    //for each screen position
    for(int count=0; count<80*25-1; count++)
    {
    ch = WHITE;
    //assume it’s prime
    for(int j=2; j<count; j++) //divide by every integer from
        if(count%j == 0) //2 on up; if remainder is 0,
        {
            ch = GRAY;//it’s not prime
            break;//break out of inner loop
        }

    cout << ch; //display the character
    //getchar();
    //freeze screen until keypress
    }
    
return 0;
}