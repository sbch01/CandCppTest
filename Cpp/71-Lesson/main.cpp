/*
В следния пример се разглеждат наследени класове

При наследените класове се ползва основен клас, като производния клас може да достъпва само 
публичните методи и променливи ако искаме променливите, който са private да се достъпват
и от производния клас е се използва ключовата дума protected.

Производния клас не може да наследява конструктори и деконструктори.

*/

#include <iostream>
using namespace std;


class Coil  {

  protected:
    unsigned int Width;
    float Pitch;
    double Count;

  public:

  bool StopInLayer = false;

  Coil () : Width(10), Pitch(1.23), Count(100) // Default Constructor
  {} 

  Coil (unsigned int w, float p, double c) : Width(w), Pitch(p), Count(c) //Custom constructor
  {}

  void plotSetings (){

      cout<<"Coil Input Parameters:"<<endl<<"=================================="<<endl;
      cout<<"Width: "<<Width<<" mm "<<endl;
      cout<<"Pitch: "<<Pitch<<" mm"<<endl;
      cout<<"Counts: "<<Count<<" turns"<<endl;
      cout<<"Stop in layer: "<< (StopInLayer? "enable" : "disable")<<endl<<endl;
      

      cout<<"Calculated parameters:"<<endl<<"=================================="<<endl;
      cout<<"Turns per layer: "<<TurnsPerLyer()<<" turns in layer"<<endl;
      cout<<"Number of layers: "<<Layer()<<" layers"<<endl<<endl;
         
  }

  int TurnsPerLyer (){
    return Width/Pitch;
  }

  int Layer(){
    return Count/TurnsPerLyer();
  }

  
};

class EnCoil :public Coil{

  public:

  //Наследяване на базовия конструктор
  EnCoil():Coil(){}

  //Наследяване на параметразирания конструктор
  EnCoil(unsigned int w, float p, double c) : Coil (w,p,c){}

  void plotMainSettings(){

    cout<<"Coil Input Parameters:"<<endl<<"=================================="<<endl;
    cout<<"Width: "<<Width<<" mm "<<endl;
    cout<<"Pitch: "<<Pitch<<" mm"<<endl;
    cout<<"Counts: "<<Count<<" turns"<<endl;
    cout<<"Stop in layer: "<< (StopInLayer? "enable" : "disable")<<endl<<endl;

  }

};



/////////////////////////////////////////////////////////////////
//                  MAIN
/////////////////////////////////////////////////////////////////
int main(){

  EnCoil cl1, cl2(200,0.23,2000);

  cl1.StopInLayer = true;

  cl1.plotSetings();
  cl2.plotSetings();

  //cl1.plotMainSettings();

}

