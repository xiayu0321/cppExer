#include <iostream>
#include <cstdlib>
using namespace std;

class timer{
	private:
		int seconds;
	public:
		timer(){
			seconds = 0;
		}
		timer(char *t){
			seconds = atoi(t);
		}
		timer(int t){
			seconds = t;
		}
		timer(int min,int sec){
			seconds = min * 60 + sec;
		}
		int gettime(){
			return seconds;
		}
};

int main(){
	timer a;
	timer b("20");
	timer c(10);
	timer d(3,45);
	
	cout<<"seconds = "<<a.gettime()<<endl;
	cout<<"seconds = "<<b.gettime()<<endl;
	cout<<"seconds = "<<c.gettime()<<endl;
	cout<<"seconds = "<<d.gettime()<<endl;
	
	return 0;
}
