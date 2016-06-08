#include<iostream>

using namespace std;

class Date{
    private:
        int year;
        int month;
        int day;
    public:
        Date(int y,int m,int d);
        void showDate();
        void showDate() const;
};

Date::Date(int y,int m,int d):year(y),month(m),day(d){}

void Date::showDate(){
    cout<<"showDate1:"<<endl;
    cout<<year<<"."<<month<<"."<<day<<endl;
}

void Date::showDate() const{
    cout<<"showDate2:"<<endl;
    cout<<year<<"."<<month<<"."<<day<<endl;
}

int main(){
    Date date1(1988,8,18);
    date1.showDate();

    const Date date2(2002,11,14);
    date2.showDate();

    return 0;
}
