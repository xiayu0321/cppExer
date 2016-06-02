#include<iostream>

using namespace std;

class A{
    private:
        int x;
        float y;
    public:
        A(int x1,float y1){
            x = x1;
            y = y1;
        }

        void show(){
            cout<<"x = "<<x<<",y = "<<y<<endl;
        }
};

class B{
    private:
        A a;
        int z;
    public:
        B(int x1,float y1,int z1):a(x1,y1){
            z = z1;
        }
        void show(){
            cout<<"z = "<<z<<endl;
        }
};

int main(){
    B b(11,2,33);
    b.show();

    return 0;
}
