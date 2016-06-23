#include<iostream>

using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0.0,double i = 0.0);
        void print();
        Complex operator+(Complex c);
        Complex operator-(Complex c);
        Complex operator*(Complex c);
        Complex operator/(Complex c);
};

Complex::Complex(double r,double i){
    real = r;
    imag = i;
}

Complex Complex::operator+(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;

    return temp;
}

Complex Complex::operator-(Complex c){
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;

    return temp;
}

Complex Complex::operator*(Complex c){
    Complex temp;

    temp.real = real * c.real - imag * c.imag;
    temp.imag = real * c.imag + imag * c.real;

    return temp;
}

Complex Complex::operator/(Complex c){
    Complex temp;
    double t;

    t = 1/(c.real * c.real + c.imag * c.imag);
    temp.real = (real * c.real + imag * c.imag) * t;
    temp.imag = (c.real * imag - real * c.imag) * t;

    return temp;
}

void Complex::print(){
    cout<<real;
    if(imag > 0)
        cout<<"+";
    if(imag != 0){
        cout<<imag<<"i"<<endl;
    }
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
