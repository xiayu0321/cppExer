#include<iostream>

using namespace std;

class Point{
	private:
		int x,y;
	public:
		void setPoint(int a,int b){
			x = a;
			y = b;
		}
		int getX(){
			return x;
		}
		int getY(){
			return y;
		}
};

int main(){
	Point p1,p2;
	Point &p3 = p2;
	int i,j;
	p1.setPoint(1,2);
	p2.setPoint(3,4);
	i = p1.getX();
	j = p1.getY();
	cout<<"p1:i = "<<i<<" j = "<<j<<endl;
	
    i = p2.getX();
    j = p2.getY();
    cout<<"p2:i = "<<i<<" j = "<<j<<endl;
    
    i = p3.getX();
    j = p3.getY();
    cout<<"p3:i = "<<i<<" j = "<<j<<endl;
    
    return 0;
}
