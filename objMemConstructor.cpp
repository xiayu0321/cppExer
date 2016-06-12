#include<iostream>

using namespace std;

class Base{
    private:
        int x;
    public:
        Base(int i){
            x = i;
            cout<<"Constructing base class\n";
        }
        ~Base(){
            cout<<"Destructing base class\n";
        }
        void show(){
            cout<<"x = "<<x<<endl;
        }
};

class Derived:public Base{
    private:
        Base d;
    public:
        Derived(int i):Base(i),d(i){
            cout<<"Constructing Derived class\n";
        }
        ~Derived(){
            cout<<"Destructing Derived class\n";
        }
};

int main(){
    Derived  obj(5);
    obj.show();

    return 0;
}
