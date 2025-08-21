//asks user to input an inetger that represents a length of time in seconds
//It will then convert that time in hours, minutes and seconds

#include <iostream>
#include <cmath>
using namespace std;

int main(){

int time, hour, minute, second;
float hour1, minute1, difh, difm;

//time variable will take in time inputed by user
cout << "Enter a length of time in seconds: ";
cin >> time;

//This will calculate the time if hours, seconds and minutes are involved
if (time>=3600){
    hour = time / 3600;
    hour1 = time / 3600.0;
    difh = hour1 - hour;

    minute = difh * 60;
    minute1 = difh * 60.0;
    difm = minute1 - minute;

    second = difm * 60;

    cout << "The time is " << hour << " hours" << " " << minute << " minutes" <<  " " << second << "seconds";

}
//This will calculate the time if only minutes and seconds are involved
if(time<3600 && time >60){
    minute = time / 60;
    minute1 = time / 60.0;
    difm = minute1 - minute;

    second = difm * 60;

    cout << "The time is " << minute << " minutes" << " " << second << " seconds";

}

//prints the amount of seconds if number inputed is less than a minute
if(time<60)
    cout << "The time is " << time << "seconds";
return 0;
}