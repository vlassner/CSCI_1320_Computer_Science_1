//getline(stream(cin),variable name, delimeter) = inputs a line of words into variable

#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>
using namespace std;

struct Park {
    string parkname[55];
    string state[55];
    int area[55];
};

// length: Number of items currently stored in the array void addPark(Park parks[], string parkname , string state , int area , int length);
void addPark(Park parks[], string parkname , string state , int area , int length);

// length: Number of items in the array void printList(const park parks[], int length);
void printList(const Park parks[], int length);

int main (){
    Park p;
    int length = 55;
    ifstream inFile;
    inFile.open("park.csv");

    for(int i=0;i<length;i++){
        getline(cin, p.parkname[i], ",");
        getline(cin, p.state[i], ",");
        getline(cin, p.area[i]);
    }

    inFile.close();    //addPark(

    return 0;
}

void addPark(Park parks[], string parkname , string state , int area , int length){


}


void printList(const Park parks[], int length){

for(int i =0;i<length;i++){
    cout << p.parkname[i] << "[" << p.state[i] << "] area: " << p.area[i] << endl;
}
}