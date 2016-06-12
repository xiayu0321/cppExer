#include<iostream>

using namespace std;

class Base{
    private:
        int x;
    protected:
        int y;
    public:
        void setxy(int m,int n){
            x = m;
            y = n;
        }
        void showxy(){
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
        }
};

class Derived:public Base{
    private:
        int z;
    public:
        void setxyz(int m,int n,int l){
            setxy(m,n);
            z = l;
        }
        void showxyz(){
            showxy();
            cout<<"z = "<<z<<endl;
        }
};

int main(){
    Derived obj;
    obj.setxyz(2,3,4);
    obj.showxy();

    obj.showxyz();

    return 0;
}
