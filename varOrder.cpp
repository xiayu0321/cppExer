#include<iostream>

using namespace std;

class D{	
    private:
		int mem2;
		int mem1;
		//	int mem1;
		//  int mem2;   得到的结果  mem1 = 1，mem2 = 15； 
	public:
		D(int i):mem2(i),mem1(mem2+1){
			cout<<"mem1:"<<mem1<<endl;
			cout<<"mem2:"<<mem2<<endl;
		}
};

int main(){
	D d(15);
	
	return 0;
}
