#include<iostream>

using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point(int a = 0,int b = 0);
        Point(const Point &p);
        void print(){
            cout<<x<<" "<<y<<endl;
        }
};

Point::Point(int a,int b){
    x = a;
    y = b;
    cout<<"using normal constructor\n";
}

Point::Point(const Point &p){
    x = 2 * p.x;
    y = 2 * p.y;
    cout<<"using copy constructor.\n";
}

void fun1(Point p){
    p.print();
}

Point fun2(){
    Point p4(10,30);
    return p4;
}

int main(){
    Point p1(30,40);
    p1.print();

    Point p2(p1);
    p2.print();

    Point p3 = p1;
    p3.print();

    fun1(p1);

    p2 = fun2();

    p2.print();

    return 0;
}
