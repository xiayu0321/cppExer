#include<iostream>

using namespace std;

class Base{
    private:
        int x;
    public:
        void setx(int n){
           x = n;
        }
        void showx(){
            cout<<"x = "<<x<<endl;
        }
};

class Derived:private Base{
    private:
        int y;
    public:
        void setxy(int n,int m){
            setx(n);
            y = m;
        }
        void showxy(){
            showx();
            cout<<"y = "<<y<<endl;
        }
};

int main(){
    Derived obj;
   // obj,setx(10);
   // obj.showx();
    obj.setxy(22,77);
    obj.showxy();

    return 0;
}
