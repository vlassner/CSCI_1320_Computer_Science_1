#include <iostream>

using namespace std;

void caseMutation(char child[],int length);

int main(){

    return 0;
}

void caseMutation(char child[],int length){
    int mutper = rand()%100 +1, randind = rand()%length + 1, rando;
    char randchar;


    for(int i = 0;i<length;i++){
        if(mutper <= 4){
            if (rando >20){
                randchar = char(rand() % 25 +65);
            }else if(rando <20 && rando >10){
                randchar = char(32);
            }else{
                 randchar = char(rand()%25 + 97);
            }
            child[randind] = randchar;
        }
    }
        return;
}