#include <iostream>
#include <ctime>
using namespace std;

int roll();
int oneTurn (bool n);
bool loopGame(int n);

int main() {
    srand(time(NULL));
    //calls loopGame fucntion
    //displays result
    return 0;
}

int roll(){
    //rand() function with a range of 1-6
}

int oneTurn (bool n){
    //do while loop that will continuously run until player gets 3 or holds
    //call roll function in loop
    //Takes sum each round
    //two modes computer and user
    //computer rolls until certain minimum(should be able to hold or roll)
    //returns sum of either player or computer
    //print each roll

}

bool loopGame(int n){
    //loop that will go till player or computer wins(oneTurn func)
    //Take in # of points to win
    //outputs 1 for computer win and 0 for human win
    //print each round for computer and user


}