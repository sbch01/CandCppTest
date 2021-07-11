
// enum example
#include <iostream>
using namespace std;

/*
Пример за вградени структори първата структура "мощнст" съдържа компонентите на активна и реактивна мощност
втората структора "товар съдържа в себе си първата структура + втората"
*/

enum menu_item {Settings, Configuration, Date, Help};




int main()
{
    menu_item section;
    
    section = Date;
    
    switch(section){

        case Settings:
        cout<<"Settings"<<endl;
        break;

        case Configuration:
        cout<<"Config"<<endl;
        break;

        case Date:
        cout<<"Date"<<endl;
        break;

        case Help:
        cout<<"Help"<<endl;
        break;

        default:
        cout<<"No proper section selected"<<endl;
    

    }

    //cout<<Settings<<endl;

    return 0;
}