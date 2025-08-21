#include <iostream>

using namespace std;

int main (){

    //declare an array to store user scores
    const int arrSize = 5;
    int score[arrSize];
    int max;

    cout << "Enter 5 scores:" << endl;
    
    for(int i = 0; i<arrSize;i++)
        cin >> score[i]; 

    cout << "the 5 scores are: " << endl;
    for(int i = 0; i<arrSize;i++)
        cout << score[i] << " ";
    cout << endl;

    // assume first element holds the max value
    max = score[0];

    for(int i = 0; i < arrSize; i++){
        if(score[i]>max)
            max = score[i];

    }
        cout << "The max score entered is: " << max << endl;

    return 0;
}