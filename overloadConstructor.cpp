#include<iostream>

using namespace std;

class Date{
	private:
		int year;
		int month;
		int day;
	public:
		Date();
		Date(int y,int m,int d);
		void showDate();
};

Date::Date(){
	year = 2016;
	month = 5;
	day = 26;
}

Date::Date(int y,int m,int d){
	year = y;
	month = m;
	day = d;
}

inline void Date::showDate(){
	cout<<"year:"<<year<<" month:"<<month<<" day:"<<day<<endl;
}

int main(){
	Date date1;
	cout<<"date1 output:"<<endl;
	date1.showDate();
	Date date2(2016,3,21);
	cout<<"date2 output:"<<endl;
	date2.showDate();
	
	return 0;
}
