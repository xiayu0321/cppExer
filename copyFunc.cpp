#include<iostream>

using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int a,int b){
            x = a;
            y = b;
        }
        Point(const Point  &p){
            x = 2 * p.x;
            y = 2 * p.y;
        }
        void show(){
            cout<<x<<" "<<y<<endl;
        }
};

int main(){
    Point p1(30,40);
    Point p2(p1);
    p1.show();
    p2.show();

    return 0;
}
