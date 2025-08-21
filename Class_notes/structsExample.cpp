#include <iostream>
#include <string>

using namespace std;

struct AnimalPatient{
    string name;
    string species;
    int age;
};

void displayAge(AnimalPatient a0);
//void displayAgeB(int x);
// what if we want a function to collect the user inputs?
void collectUserInputs(AnimalPatient & a0); //pass local variable

AnimalPatient collectUserInputsB();// pass an assingment statement

int main(){
    AnimalPatient a;
    
    collectUserInputs(a);

    displayAge(a);
    // displayAgeB(a.age);

    AnimalPatient b;
    b = collectUserInputsB();

    return 0;
}

//void displayAgeB(int x){

//}

void collectUserInputs(AnimalPatient & a0){//pass by reference
     // must include the dot operater
    cout << "Enter the species: ";
    cin >> a0.species;

    cout << "Enter the name: ";
    cin >> a0.name;

    cout << "Enter the age: ";
    cin >> a0.age;
}

AnimalPatient collectUserInputsB(){
    AnimalPatient a0;
    cout << "Enter the species: ";
    cin >> a0.species;

    cout << "Enter the name: ";
    cin >> a0.name;

    cout << "Enter the age: ";
    cin >> a0.age;

    return a0;
}

void displayAge(AnimalPatient a0){
    cout << a0.name << "'s age is " << a0.age << endl;

    if(a0.species == "cat"){
        cout << "The age in cat years is: " << a0.age*7 << endl;
    }
}

