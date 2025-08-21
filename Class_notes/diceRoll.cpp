#include <iostream>
#include <ctime> // allows usage of system clock
using namespace std;
// Generate reandom numbers between 1 and 6

int main(){
    int x;
    srand(time(NULL)); // Prevents rand() from printing same random numbers
    // time(NULL) is the time from the computer
    for (int i=0; i<10; i++){
        x = 1 + rand()%6;
        cout << x << endl;
    }


    return 0;
}