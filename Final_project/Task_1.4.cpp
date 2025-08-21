#include <iostream>
#include <string>

using namespace std;

void breed(char par1[],char par2[], int length, char child[]);

int main(){

    return 0;
}

void breed(char par1[],char par2[], int length, char child[]){
    
    //method 1
    //find a midpoint between the function and then add the arrays together
    int randnum = rand() % length + 1;

    for(int i=0;i<length;i++){
        if(i < randnum){
            child[i] = par1[i];
        }else{
            child[i] = par2[i];
        }
    }

    //method 2
    //Adds random segments ofthe arrays together
    // int randnum2 = rand()%2 +1;
    // for(int i=0;i<length;i++){
    //     if(randnum == 1){
    //         child[i] = par1[i];
    //     }else{
    //         child[i] = par2[i];
    //     }

    // }
    

}