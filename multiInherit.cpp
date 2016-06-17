#include<iostream>

using namespace std;

class X{
    private:
        int a;
    public:
        void setX(int x){
            a = x;
        }
        void showX(){
            cout<<"a = "<<a<<endl;
        }
};

class Y{
    private:
        int b;
    public:
        void setY(int x){
            b = x;
        }
        void showY(){
            cout<<"b = "<<b<<endl;
        }
};

class Z:public X,private Y{
    private:
        int c;
    public:
        void setZ(int x,int y){
            setY(y);
            c = x;
        }
        void showZ(){
            showY();
            cout<<"c = "<<c<<endl;
        }
};

int main(){
    Z obj;
    obj.setX(3);
    obj.showX();

    obj.setZ(5,6);
    obj.showZ();

    return 0;
}
