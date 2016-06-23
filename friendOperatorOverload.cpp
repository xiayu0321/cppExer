#include<iostream>

using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0.0,double i =0.0);
        void print();
        friend Complex operator+(Complex &a,Complex &b);
        friend Complex operator-(Complex &a,Complex &b);
        friend Complex operator*(Complex &a,Complex &b);
        friend Complex operator/(Complex &a,Complex &b);
};

Complex::Complex(double r,double i){
    real = r;
    imag = i;
}

void Complex::print(){
    cout<<real;
    if(imag > 0)
        cout<<"+";
    if(imag != 0)
        cout<<imag<<"i"<<endl;
}

Complex operator+(Complex &a,Complex &b){
    Complex temp;
    temp.real = a.real + b.real;
    temp.imag = a.imag + b.imag;

    return temp;
}

Complex operator-(Complex &a,Complex &b){
    Complex temp;
    temp.real = a.real - b.real;
    temp.imag = a.imag - b.imag;

    return temp;
}
Complex operator*(Complex &a,Complex &b){
    Complex temp;
    temp.real = a.real * b.real - a.imag * b.imag;
    temp.imag = a.real * b.imag + a.imag * b.real;

    return temp;
}

Complex operator/(Complex &a,Complex &b){
    Complex temp;
    double t;
    t = 1/(b.real * b.real + b.imag * b.imag);
    temp.real = (a.real * b.real + a.imag * b.imag)*t;
    temp.imag = (b.real * a.imag - a.real * b.imag)*t;

    return temp;
}

int main(){
    Complex a1(2.3,4.6),a2(3.6,2.8),a3,a4,a5,a6;
    a1.print();
    a2.print();

    a3 = a1 + a2;
    a3.print();

    a4 = a1 - a2;
    a4.print();

    a5 = a1 * a2;
    a5.print();

    a6 = a1 / a2;
    a6.print();

    return 0;
}
