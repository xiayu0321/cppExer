#include<iostream>

using namespace std;

class Coord{
    private:
        int x,y;
    public:
        Coord(int x1 = 0,int y1 = 0){
            x = x1;
            y = y1;
        }
        friend Coord operator-(Coord &obj);
        void show(){
            cout<<"x = "<<x<<" y ="<<y<<endl;
        }
};

Coord operator-(Coord &obj){
    obj.x = -obj.x;
    obj.y = -obj.y;

    return obj;
}

int main(){
    Coord ob1(50,69),ob2;

    ob1.show();
    ob2 = -ob1;
    ob2.show();

    return 0;
}
