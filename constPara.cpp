#include<iostream>

using namespace std;

int add(const int &i,const int &j);

int add(const int &i,const int &j){
    return i + j;
}

int main(){
    int a = 20;
    int b = 30;

    cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;

    a = 15;
    b = 50;

    cout<<a<<" + "<<b<<" = "<<add(a,b)<<endl;

    return 0;
}
