
// first class example
#include <iostream>
using namespace std;

/*
Пример, в който се създава клас стек съхраняващ цели числа
*/

class Stack {
     
    private:
    enum {MAX=5}; //дефиниране на константа в класа
    int stackMem[MAX]; //деклариране на масив за стека
    unsigned int index; //спомагателна променлива за индексиране на членовете на стека
   
    public:
    void push(int input){
        
        if(index < MAX)
            stackMem[index++] = input;
        else 
            cout<<"Stack is full"<<endl;
        
    }

    int pull(void){

        if(index==0) {
            cout<<"Stack is empty"<<endl;
            return 0;}
        else 
            return stackMem[--index];
    }

    Stack () {index=0;}

};


int main()
{

  
   Stack s1;

   s1.push(12); //1
   s1.push(50); //2
   s1.push(23); //3
   s1.push(28); //4
   s1.push(36); //5
   
   
   cout<<s1.pull()<<endl;  
   cout<<s1.pull()<<endl;  
   cout<<s1.pull()<<endl;  
   cout<<s1.pull()<<endl;  
   cout<<s1.pull()<<endl;
   cout<<s1.pull()<<endl;
   
  
    return 0;
}

