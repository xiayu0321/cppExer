#include <iostream>
#include <cmath>

using namespace std;

class complex{
	private:
		double real;
		double imag;
	public:
		complex(double r = 0.0,double i = 0.0);
		~complex();
		double abscomplex();
};

complex::complex(double r,double i){
	real = r;
	imag = i;
}

complex::~complex(){
	cout<<"Destructor called."<<endl;
}

double complex::abscomplex(){
	return sqrt(real*real+imag*imag);
}

int main(){
	complex A(1.1,2.2);
	cout<<"复数的绝对值是:"<<A.abscomplex()<<endl;
	
	return 0;
}
