#include<iostream>
#ifndef PONTO_3D
#define PONTO_3D 
#include "Ponto2D.hpp"
using namespace std;

class Ponto3D: public Ponto2D{

    public:
        Ponto3D( double xx = 0, double yy = 0, double zz=0 ): Ponto2D( xx, yy ), z(zz){};
        Ponto3D& operator= ( const Ponto3D &acss );
        Ponto3D& operator= ( const Ponto2D &acss );
        ~Ponto3D(){};
        friend ostream& operator<< ( ostream &Saida, const Ponto3D &acss );
        void set ( double nx, double ny, double nz ) { Ponto2D::set( nx, ny ); z=nz; }
        double get_z( void ) { return z; }
        
    private:
        double z;
}; 

ostream& operator<< ( ostream &Saida, const Ponto3D &acss ){
  Saida << endl;
  Saida << acss.get_x() << endl;
  Saida << acss.get_y() << endl;
  Saida << "z = " << acss.z << endl;
  return Saida;
}

Ponto3D& Ponto3D::operator= ( const Ponto3D &acss ){
  Ponto2D::set( acss.get_x(),acss.get_y() );
    z = acss.z;
    return *this;
}

Ponto3D& Ponto3d::operator= ( const Ponto2D &acss ){ 
   Ponto2D::set( acss.get_x(),acss.get_y() );
    z = 0;
    return *this;
}
#endif
// %_PONTO_3D