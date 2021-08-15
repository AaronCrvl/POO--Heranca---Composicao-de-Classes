#include <iostream>
#include <string>
#ifndef TRAVELER
#define TRAVELER
using namespace std;

class Traveler{
    protected:
      string toy; 

    public:
      Traveler( string toy );
      Traveler( const Traveler &i );
      Traveler& operator=( Traveler &i );
      Traveler& operator=( const char* iou );
      void print();
};

void Traveler::print(){
  cout << toy << endl;
}

Traveler::Traveler( string toy ){
    this-> toy = toy;
}

Traveler& Traveler::operator=( const char* toy ){
    this->toy = toy;
    return *this;
}

Traveler::Traveler( const Traveler &i ){
    toy = "[Copia] =:  ";
    toy += i.toy;
}

Traveler& Traveler::operator=( Traveler &i ){
    toy = i.toy;
    return *this;
}
#endif
// %_TRAVELER