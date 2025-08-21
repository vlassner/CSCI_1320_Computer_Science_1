//program that takes in 2 user user integer values and assigns them
// to variables. Then perofrms a swap

#include <iostream>
using namespace std;

void swapValues (int &var1, int &var2);

int main(){

    int x,y;

    cout << "please enter values for x and y ";
    cin >> x >> y;

    cout << "pre-swap values x = " << x << " y = " << y << endl;

    //do swap here
    swapValues(x,y);

    cout << "post-swap values x = " << x << " y = " << y << endl;

    return 0;
}

void swapValues(int &var1, int &var2){
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;

}