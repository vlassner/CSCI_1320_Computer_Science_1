#include <iostream>
#include <ctime>
#include <cstdlib> // should always include this to use rand() and srand()

using namespace std;

int rand0toX(int x); // Takes in an integer value x
// returns a random number b/w 0 and X

int guessNumber(); // Takes in nothing
                   // prompts the user to guess a number
                   // keeps prompting until user guesses
                   // correctly. returns number of tries

int main(){
    srand(time(NULL));
    //cout << rand() << endl;
    //cout << "test rand0toX: " << rand0toX(20) << endl;

    int noOfTries = guessNumber();

    cout << "Good job. You guessed the correct number in " << noOfTries << " tries." << endl;

    return 0;
}

int rand0toX(int x){
    int out;
    out = rand()%(x+1);
    return out;

}

int guessNumber(){
    int counter = 0, userGuess;
    int hiddenNumber = rand0toX(5);

    do {
    cout << "Guess a number between 0 and 5: ";
    cin >> userGuess;
    counter++;
    }while(userGuess != hiddenNumber);
    
    cout << "The coreect number is " << hiddenNumber << endl;

    return counter;

}
