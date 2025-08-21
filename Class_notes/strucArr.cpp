#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct WordLetters{
    string word;
    int nLet; // number of letters in the word
};

void readFile(string fileName, int numWords, WordLetters arr[]);

int main(){
    const int N = 17;
    WordLetters a[N];
    string fileName = "lab10test.txt";
    readFile(fileName,N,a);

    for (int i=0; i < N;i++){
        cout << a[i].word << " " << a[i].nLet << endl;
    }

    return 0;
}

void readFile(string fileName, int numWords, WordLetters arr[]){
    ifstream inStream;
    inStream.open(fileName);
    for (int i=0;i<numWords;i++){
        inStream >> arr[i].word;
        arr[i].nLet = arr[i].word.length(); //string dot operators together
    }

    inStream.close();
}


