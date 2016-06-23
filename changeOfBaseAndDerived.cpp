#include<iostream>

using namespace std;

class Base{
    public:
        int c;
        Base(int x){
            c = x;
        }
        void show(){
            cout<<"c = "<<c<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(int x):Base(x){
        }
};

void fun(Base &bb){
    cout<<bb.c<<endl;
}

int main(){
    Base b1(100);
    b1.show();

    Derived d1(77);
    b1 = d1;
    b1.show();

    Derived d2(33);
    Base &b2 = d2;
    b2.show();

    Derived d3(55);
    Base *b3 = &d3;
    b3->show();

    Derived d4(12);
    fun(d4);

    return 0;
}
