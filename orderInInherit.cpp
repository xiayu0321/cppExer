#include<iostream>

using namespace std;

class Base{
    public:
        Base(){
            cout<<"Constructing Base class"<<endl;
        }
        ~Base(){
            cout<<"Destructing Base class"<<endl;
        }
};

class Derived:public Base{
    public:
        Derived(){
            cout<<"Constructing Derived class"<<endl;
        }
        ~Derived(){
            cout<<"Destructing Derived class"<<endl;
        }
};

int main(){
    Derived obj;
    return 0;
}
