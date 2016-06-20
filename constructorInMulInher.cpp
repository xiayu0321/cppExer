#include<iostream>

using namespace std;

class X{
    private:
        int a;
    public:
        X(int sa){
            a = sa;
        }
        int getX(){
            return a;
        }
        ~X(){
            cout<<"X_Destructor called."<<endl;
        }
};

class Y{
    private:
        int b;
    public:
        Y(int sb){
            b = sb;
        }
        int getY(){
            return b;
        }
        ~Y(){
            cout<<"Y_Destructor called."<<endl;
        }
};

class Z:public X,private Y{
    private:
        int c;
    public:
        Z(int sa,int sb,int sc):X(sa),Y(sb){
            c = sc;
        }
    int getZ(){
        return c;
    }
    int getY(){
        return Y::getY();
    }
    ~Z(){
        cout<<"Z_Destructor called."<<endl;
    }
};

int main(){
    Z obj(2,3,4);
    int ma=obj.getX();
    cout<<"a = "<<ma<<endl;

    int mb = obj.getY();
    cout<<"b = "<<mb<<endl;

    int mc = obj.getZ();
    cout<<"z = "<<mc<<endl;

    return 0;
}
