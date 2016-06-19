#include<iostream>

using namespace std;

class location{
	private:
		int x;
		int y;
	public:
		location(int m,int n){
			x = m;
			y = n;
		}

		void init(int initx,int inity){
			x = initx;
			y = inity;
		}

		int getx(){
			return x;
		}

		int gety(){
			return y;
		}
};

int main(){
	// location A3;  error:no matching function for call to 'location::location()'
	location A3(1,1);
	cout<<A3.getx()<<" "<<A3.gety()<<endl;
	A3.init(785,900);
	cout<<A3.getx()<<" "<<A3.gety()<<endl;
	return 0;
}
