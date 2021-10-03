/*
В следния пример се разглеждат примери с указатели

Разгледано е масив от указатели
*/

#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////
//                  Function prototype
/////////////////////////////////////////////////////////////////

void plotMenuItem (const char*); //plot only one item of menu 
void plotMenu (const char*[], const int); //plot all menu
/////////////////////////////////////////////////////////////////
//                  MAIN
/////////////////////////////////////////////////////////////////
int main(){

    const int menuChapters = 5;

    //Деклариране на масива от указатели 
    const char* menuItem[menuChapters] = {"Settings","Overcurrent","Auto Reclose","TripCir SV","Setting Group"};

    //Plot all menu items 
    plotMenu(menuItem,menuChapters);
    
}//end main


//================================================================

void plotMenuItem (const char* ptrMenuItem){

    while(*ptrMenuItem){

        cout <<*ptrMenuItem;
        ptrMenuItem++;
    
    }

    cout<<endl;

}//end plotMenuItem


void plotMenu (const char* start[], const int num){

    for(int k = 0; k < num ;k++)
        plotMenuItem(start[k]);
    
}//end plotMenu