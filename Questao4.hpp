#ifndef QUESTAO_4
#define QUESTAO_4

#include <iostream>
#include <stdio.h>

using namespace std;

class Base{
  
    int i;
    
    protected:
        int read() const { return i; }
        void set ( int ii ) { i = ii; }
    
    public:
        Base( int ii = 0 ) : i(ii) {}
        int value( int m ) const { return m*i; }
};


class Derived : protected Base{ 

        int j;

        public:
            Derived( int jj = 0 ) : j(jj) {}
            void change( int x ) { set(x); }
            void print(){
                cout << "J: " << read() << endl;
            }
};
class Derived2 : public Derived{

        int k;

        public:
            Derived2(int kk = 0) : k(kk) {}
            void d2Read(){
                cout << "K: " << read() << endl;
            }
            void d2Value(int m){
                cout << "Value: " << value(m) << endl;
            }
};

int main(){    

    Derived2 A(1);
    A.d2Read();
    A.d2Value(2);

    return 0;
}
#endif
// %_QUESTAO_4
