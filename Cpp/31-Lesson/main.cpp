
// structure example
#include <iostream>
using namespace std;

/*
Пример за вградени структори първата структура "мощнст" съдържа компонентите на активна и реактивна мощност
втората структора "товар съдържа в себе си първата структура + втората"
*/
struct power{
    float active_pow;
    float reactive_pow;
};

struct Load
{
    int x_pos;
    int y_pos;
    power load_pow;
};

//инициализиране на структурата
Load MainLoad={0,0,{12.45,3.4}};



int main()
{
    //ред 23 може да бъде записан по следния начин:
    MainLoad.x_pos=0;
    MainLoad.y_pos=0;
    MainLoad.load_pow.active_pow=12.45;
    MainLoad.load_pow.reactive_pow=3.4;

    cout<<MainLoad.load_pow.active_pow<<endl;

    return 0;
}