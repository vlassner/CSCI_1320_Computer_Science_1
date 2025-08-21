//Program that will print habit at numbers divisble by 3, rabbit for #'s divisable by 7 and habutrabbit for #'s divisable by 3 and 7
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i;

    for (i=1; i<=170;i++){
        if (remainder(i,3) == 0 && remainder(i,7) != 0){
            cout << "Habit" << endl;
        }
        
        if (remainder(i,7) == 0 && remainder(i,3) != 0){
            cout << "Rabbit" << endl;
        }
        if (remainder(i,3)==0 && remainder(i,7) == 0) \
            cout << "HabitRabbit" << endl;
        else{
            cout << i << endl;
        }
    }
    return 0;
}