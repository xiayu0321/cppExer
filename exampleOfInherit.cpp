#include<iostream>

using namespace std;

class Building{
    protected:
        int floors;
        int rooms;
        double j_area;
    public:
        Building(int f = 0,int r = 0,double a = 0){
            floors = f;
            rooms = r;
            j_area = a;
        }
        void Show_Info(){
            cout<<"楼房层数:"<<floors<<endl;
            cout<<"房间数:"<<rooms<<endl;
            cout<<"楼房总面积数:"<<j_area<<endl;
            cout<<"其中:";
        }
};

class Home_Arch:public Building{
    private:
        int bedrooms;
        int parilor;
        int toilets;
        int kitchens;
    public:
        Home_Arch(int f = 0,int r = 0,double a = 0,int b = 1,int p = 1,int t = 1,int k = 1):Building(f,r,a){
            bedrooms = b;
            parilor = p;
            toilets = t;
            kitchens = k;
        }
        void show(){
            cout<<"卧室数:"<<bedrooms<<endl;
            cout<<" 客厅数:"<<parilor<<endl;
            cout<<" 卫生间数:"<<toilets<<endl;
            cout<<" 厨房数:"<<kitchens<<endl;
        }
};

class Office_Building:public Building{
    private:
        int office;
        int assembly_room;
    public:
        Office_Building(int f = 0,int r = 0,double a = 0,int o = 0,int a_r = 0):Building(f,r,a){
            office = o;
            assembly_room = a_r;
        }
        void show(){
            cout<<endl;
            cout<<"办公楼:"<<endl;
            Building::Show_Info();
            cout<<"办公室楼:"<<office<<"间"<<endl;
            cout<<"会议室数:"<<assembly_room<<"个"<<endl;
        }
};

class Hospital:public Building{
    private:
        int sickroom;
        int operating_rooms;
    public:
        Hospital(int f = 0,int r = 0,double a = 0,int s = 0,int o_r = 0):Building(f,r,a){
            sickroom = s;
            operating_rooms = o_r;
        }
        void show(){
            cout<<endl;
            cout<<"医院:"<<endl;
            Building::Show_Info();
            cout<<"病房数:"<<sickroom<<"间"<<endl;
            cout<<"手术室数:"<<operating_rooms<<"间"<<endl;
        }
};

int main(){
    Home_Arch home(7,100,12000,3,1,1,1);
    Office_Building office(4,80,3500,40,12);
    Hospital hosp(10,300,25000,200,20);
    home.show();
    office.show();
    hosp.show();

    return 0;
}
