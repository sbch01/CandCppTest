/* 
Урок свързан със свързани списъци Linked list
 */
#include <iostream>
#include <cstring>
using namespace std;


struct ListItem { //създаваме структура която ще се свързва в свързан списък
    int Data;
    ListItem* node; //това е връзката която е указател към същия тип структура
};


class LinkList { //създаваме клас  свързан списък

    private:
        ListItem* first; //създаваме указател към първия член на списъка

    public:
        LinkList (){ //Constructor
            first = NULL; // задаваме стойнност нула на първия указател
        }

        void addItem(int d){// Функция за добавяне на член в свързания списък

            ListItem * newItem = new ListItem; //Създава нова променлива от тип ListItem резервира памет за още един член в списъка
            newItem->Data = d; //Зареждаме данните, които се подават от функцията в променливата Data на структурата
            newItem->node = first; //задаваме стойност NULL в указателя на новия член на списъка
            first = newItem; //указателя на първия член го насочваме към токущо създадения нов член

        }

        void plotList(){ //Функция за печатане на списъка

            ListItem* current = first;

            cout<< "first -> ";

            while(current != NULL){

                cout<<current->Data<< " -> ";
                current = current->node;

            }
            cout<< "null"<< endl;

        }
};


int main (){

LinkList newList;

newList.addItem(12);
newList.addItem(45);
newList.addItem(35);
newList.addItem(77);

newList.plotList();


return 0;
}
