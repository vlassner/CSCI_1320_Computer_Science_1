//create a function that will generate 200 random strings of upper/lower case letters stored in one array
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void buildPopulation(string str_arr[],int population,string target);

int main(){
    int population = 200;
    string str_arr [population];

    srand(time(NULL));
    buildPopulation(str_arr, population,"May your mountains rise");

    cout << str_arr[1];

    return 0;
}

void buildPopulation(string str_arr[],int population,string target){
    int target_length = target.length(), rando;
    char dna[target_length], randnum;
    for(int i=0;i<population;i++){
        
        for(int j=0;j < target_length;j++){ //adds characters to each element of the variable dna
            rando = rand()%30+1;
            
            // will make it randomly choose between uppercase letters, lower case letters and a space
            if (rando >20){
                randnum = char(rand() % 25 +65);
            }else if(rando <20 && rando >10){
                randnum = char(32);
            }else{
                 randnum = char(rand()%25 + 97);
            }
            
            dna[j] = randnum;
            
        }
        string dna1(dna);
        str_arr[i] = dna1;

    }
    return;
}