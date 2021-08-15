#include <iostream>
#ifndef BUSINESS_TRAVELER
#define BUSINESS_TRAVELER

#include "Traveler.hpp"
#include "Pager.hpp"

using namespace std;

class BusinessTraveler: protected Traveler{
    Pager *pgr;

    public:
        BusinessTraveler();
        BusinessTraveler( string toy );
        BusinessTraveler( BusinessTraveler& b );
        BusinessTraveler& operator=( BusinessTraveler &b );
        ~BusinessTraveler();
        void print();
};

BusinessTraveler::BusinessTraveler():Traveler( "1" ){
    pgr = new Pager( "1" );
  
}

BusinessTraveler::BusinessTraveler( string toy ):Traveler( toy ){
    pgr = new Pager( toy );
  
}

BusinessTraveler::BusinessTraveler( BusinessTraveler& b ):Traveler( b ){
    pgr = new Pager( *b.pgr );
    
}
BusinessTraveler::~BusinessTraveler(){
    delete( pgr );
}

BusinessTraveler& BusinessTraveler::operator=( BusinessTraveler &b ){
    toy = b.toy;
    *pgr = *b.pgr;
    return *this;
}
#endif
// %_BUSINESS_TRAVELER