#include <iostream>
#ifndef BOX
#define BOX
#include "Ponto3D.hpp"
using namespace std;

class Box{
    double largura, altura, profundidade;

    public:
        Box( Ponto3D p1, Ponto3D p2, Ponto3D p3 );
        double volume() { return largura * altura * profundidade; };
        double area() { return 2*( largura*altura; ) };
};

Box::Box( Ponto3D p1, Ponto3D p2, Ponto3D p3 ){
    if( p1.get_y() != p2.get_y() ){
        p2.set(p2.get_x(), p1.get_y(), p2.get_z());
    }
    if(p1.get_z() != p2.get_z()){
       p2.set(p2.get_x(), p2.get_y(), p1.get_z());
    }
    if(p2.get_x() != p3.get_x()){
      p3.set(p2.get_x(),p3.get_y(),p3.get_z());
    }
    
    largura = p2.get_x() - p1.get_x();
    altura = p3.get_y() - p2.get_y();
    profundidade = p3.get_z() - p2.get_z();
}
#endif
// %_BOX