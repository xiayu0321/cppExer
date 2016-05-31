#include<iostream>

using namespace std;

class Tr{
    private:
        int i;
        int a;
        int b;
    public:
        Tr(int n){
            i = n;
        }
        void set_i(int n){
            i = n;
        }
        int get_i(){
            return i;
        }
};

void sqr_it(Tr &ob){
    ob.set_i(ob.get_i()*ob.get_i());
    cout<<"经过sqr_it()函数后数据成员为:"<<ob.get_i()<<endl;
}

int main(){
    Tr obj(10);
    cout<<"调用sqr_it()函数前数据成员为:"<<obj.get_i()<<endl;

    sqr_it(obj);

    cout<<"调用sqr_it()后数据成员为:"<<obj.get_i()<<endl;

    return 0;
}
