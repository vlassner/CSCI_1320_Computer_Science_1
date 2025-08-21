//script that uses the Babylonian algorithm to compute the square root of a number n
//A function that will estimate values for a given square root

#include <iostream>
using namespace std;

int main(){
    int n;
    float r, guess;
cout << "Enter a number to take the square root of: " << endl;
cin >> n;

cout << "Enter your guess(for accuracy it must be smaller than the previous number): ";
cin >> guess;

//loop that will estimate the root of a number
for (int i=0;i<=4;i++) {
    r = n / guess;
    guess = (guess + r) / 2;
}
cout.setf(ios::fixed); //sets the decimal to be fixed at the one hundredths place
cout.precision(2);
cout << "The answer is " << guess << endl;

return 0;
}