#include<iostream>

using namespace std;

class Sample{
    private:
        int n;
    public:
        int m;
        Sample(int i,int j){
            m = i;
            n = j;
        }
        void setValue(int i){
            n = i;
        }
        void display(){
            cout<<"m = "<<m<<endl;
            cout<<"n = "<<n<<endl;
        }
};

int main(){
   // Sample  const a(10,20);
    Sample a(10,30);
    a.setValue(40);
    a.m = 30;
    a.display();
    return 0;
}
