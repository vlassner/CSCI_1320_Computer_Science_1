// timeEgA.cpp
#include <iostream>
#include <string>
using namespace std;

class Time12{
private:
	int hour;
	int minute;
	string mer;  // meridiem 
public:
	//method for dislaying data
	void printDate(){
		cout << hour << ":" << minute << mer << endl;
	}
	//setters methods(void or return boolean):
	void setHour( int h ){ // mutator{
		if ( h >= 0 && h <= 12 )
			hour = h;
		else
			cout << "bad choice " << endl;
	}
	void setMinute( int m ){
		if( m >=0 && m <=60 )
			minute = m;
		else
			cout << "wrong choice for minute " << endl;
	}
	void setMer(string s){
		if(s=="AM"||s=="PM")
			mer = s;
		else
			cout << "wrong choice for meridiem" << endl;
	}
	// accessor methods
	int getHour() {
		return hour;
	}
	int getMinute() {
		return minute;
	}
	string getMer(){
		return mer;
	}
};




int main(){
	Time12 t; 
	t.setHour(8);
	t.setMinute(29);
	t.setMer("AM");
	t.printDate();

	return 0;
}