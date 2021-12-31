/* 
Урок свързан със свързани списъци Linked list
 */
#include <iostream>
#include <cstring>
using namespace std;


struct ListItem {
    int Data;
    ListItem* node;
};


class LinkList {
private:
    ListItem* first;

public:
    LinkList (){ //Constructor
        first = NULL;
    }

    void addItem(int d){

        ListItem * newItem = new ListItem;
        newItem->Data = d;
        newItem->node = first;
        first = newItem;

    }

    void plotList(){

        ListItem* current = first;

        while(current != NULL){

            cout<<current->Data<< " <- ";
            current = current->node;

        }
        cout<< first->Data<< endl;

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
