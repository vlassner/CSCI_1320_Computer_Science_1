//archi.cpp
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main(){
    float fb, volume, radius, weight;
    const float gamma = 62.4; //const prevents a value from being overwritten

    cout << "input weight and readius of sphere: ";
    cin >> weight >> radius;

    cout << "weight = " << weight << "radius =" << radius << endl;

    volume = (4.0/3)*M_PI*pow(radius,3);

    cout << "sphere volume =" << volume << endl;

    //calculate the buoyancy force
    fb = volume *gamma;

    cout << "buoy force =" << fb << endl;

    if( fb>weight )
        cout << "object will float " << endl;
    else
        cout << "object will sink" << endl;

    cout << "Calculate another sphere? yes or no";
    string goAgain;


    return 0;
}