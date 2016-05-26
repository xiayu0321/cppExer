#include<iostream>
#include<cmath>

using namespace std;

class complex{
	private:
		double real;
		double imag;
	public:
	   /*  
	   	complex(double r = 0.0,double i = 0.0);//设置默认 
	    complex(double r,double i){  //普通的构造函数 
			real = r;
			imag = i;
		}
		*/ 
		
		complex(double r,double i):real(r),imag(i){  //使用成员初始化列表对数据成员初始化的构造函数 
		}
		void init(double r,double i){  //初始化的普通函数 
			real = r;
			imag = i;
		}
		double abscomplex(){
			double t;
			t = real * real + imag * imag;
			return sqrt(t);
		}
};

int main(){
	complex A(0,0);
	complex B(3.3,4.4);
	A.init(1.1,2.2);
	cout<<"复数的绝对值为:"<<A.abscomplex()<<endl;
	cout<<"复数的绝对值为:"<<B.abscomplex()<<endl;
	
	return 0;
}
