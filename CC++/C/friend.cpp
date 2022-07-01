#include <iostream>
using namespace std;

class Test {
    private: int a;
    protected: int b;
    public: int c;
    friend void fun();

};
void fun(){
    Test t ;
    t.a=1;
    t.b=2;
    t.c=3;
}