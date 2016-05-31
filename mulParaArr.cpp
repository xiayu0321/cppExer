#include<iostream>
#include<cmath>

using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r = 0.0,double i = 0.0):real(r),imag(i){}
        ~Complex(){
            cout<<"Destructor called."<<endl;
        }

        double abscomplex(){
            return sqrt(real*real+imag*imag);
        }
};

int main(){
    Complex com[3] = {
        Complex(1.1,2.2),
        Complex(3.3,4.4),
        Complex(5.5,6.6)
    };

    cout<<"第一个复数绝对值为"<<com[0].abscomplex()<<endl;
    cout<<"第二个复数绝对值为"<<com[1].abscomplex()<<endl;
    cout<<"第三个复数绝对值为"<<com[2].abscomplex()<<endl;

    return 0;
}
