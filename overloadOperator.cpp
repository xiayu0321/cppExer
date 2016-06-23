#include<iostream>

using namespace std;

class Complex{
    public:
        double real;
        double imag;
        Complex(double r = 0,double i = 0){
            real = r;
            imag = i;
        }
};

Complex operator+(Complex co1,Complex co2){
    Complex temp;
    temp.real = co1.real + co2.real;
    temp.imag = co1.imag + co2.imag;

    return temp;
}

int main(){
    Complex com1(1.1,2.2),com2(3.3,4.4),total1,total2;

    total1 = operator+(com1,com2);
    cout<<"real = "<<total1.real<<" "<<"imag = "<<total1.imag<<endl;

    total2 = com1 + com2;
    cout<<"real = "<<total2.real<<" "<<"imag = "<<total2.imag<<endl;

    return 0;
}
