//Program that allows the user to calculate the number of calories burned

#include <iostream>
using namespace std;

int main(){
    int lb, MET, time;
    float cal_min, cal;

    cout << "Enter the amount of metabolic equivalent(MET): " << endl;
    cin >> MET;

    cout << "Enter the amount of time in minutes:" << endl;
    cin >> time;

    cout << "Enter your weight in pounds: " << endl;
    cin >> lb;
    const double kg = 2.2*lb; //This will automatically convert lbs to kg

    cal_min = 0.0175 * MET * kg;
    cout << "The number of calories burned per minute is " << cal_min << endl;
    //This equation calculates the calories burned per minute

    cal = cal_min * time;
    cout << "The total amount of calories burned is " << cal << endl;
    //calculates the total amount of calories burned from an activity

    return 0;
}