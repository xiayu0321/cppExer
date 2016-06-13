#include<iostream>

using namespace std;

class A{
    private:
        int x;
    public:
        A(int x1){
            x = x1;
        }
        void print(){
            cout<<"x = "<<x<<endl;
        }
};

class B:private A{
    private:
        int y;
    public:
        B(int x1,int y1):A(x1){
            y = y1;
        }
        void print(){
            A::print();
        }
};

int main(){
    B b(10,20);
    b.print();

    return 0;
}
