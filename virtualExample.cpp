#include<iostream>

using namespace std;

class Base{
    protected:
        int a;
    public:
        Base(){
            a = 5;
            cout<<"Base a = "<<a<<endl;
        }
};

class Base1:public Base{
    public:
        int b1;
        Base1(){
            a = a + 10;
            cout<<"Base1 a = "<<a<<endl;
        }
};

class Base2:public Base{
    public:
        int b2;
        Base2(){
            a = a + 20;
            cout<<"base2 a = "<<a<<endl;
        }
};

class Derived:public Base1,public Base2{
    public:
        int d;
        Derived(){
            cout<<"Base1::a = "<<Base1::a<<endl;
            cout<<"Base2::a = "<<Base2::a<<endl;
        }
};

int main(){
    Derived obj;

    return 0;
}
