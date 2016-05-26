#include<iostream>
#include<cmath>

using namespace std;

class complex{
	private:
		double real;
		double imag;
	public:
	   /*  
	   	complex(double r = 0.0,double i = 0.0);//����Ĭ�� 
	    complex(double r,double i){  //��ͨ�Ĺ��캯�� 
			real = r;
			imag = i;
		}
		*/ 
		
		complex(double r,double i):real(r),imag(i){  //ʹ�ó�Ա��ʼ���б�����ݳ�Ա��ʼ���Ĺ��캯�� 
		}
		void init(double r,double i){  //��ʼ������ͨ���� 
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
	cout<<"�����ľ���ֵΪ:"<<A.abscomplex()<<endl;
	cout<<"�����ľ���ֵΪ:"<<B.abscomplex()<<endl;
	
	return 0;
}
