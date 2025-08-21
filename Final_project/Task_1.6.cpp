#include <iostream>
#include <string>
#include <ctime>
#include <cmath>
#include <time.h>

using namespace std;

void buildPopulation(string str_arr[],int population,string target, int target_length);
void calculateFitness(string str_arr[],int population, int target_length, string target,float fitness[], int &sum);
void buildMatingPool(float fit_arr[],int population, int matefac,int ind_arr[]);
void breed(string par1[],string par2[], int target_length, char child[]);
void caseMutation(char child[],int target_length);

int main(){
    int population = 200, ran1,ran2, sum =0;
    string str_arr[population], temp_str[population], target = "May your mountains rise";
    float fitness[population] = {0};
    int target_length = target.length();
    char child[target_length];
    string par1[target_length], par2[target_length];
    int matefac = 10; //breeding pool func inputs
    int ind1, ind2, fit_arr[population], endloop = 0, generation = 0;
    srand(time(NULL));

    //initializing population
    buildPopulation(str_arr, population, target, target_length);

//    int startTime, endTime;   
//    double execTime;
//    startTime = clock();
   
    do{
  for(int i=0; i<population; i++){
        calculateFitness(str_arr, population, target_length, target, fitness, sum);
        int ind_arr[sum];
        buildMatingPool(fitness, population, matefac, ind_arr);
        
    
        
       
        // par1 = str_arr[ind1];
        // par2 = str_arr[ind2];
        

        // breed(par1, par2, target_length, child);
        // caseMutation(child, target_length);
        
        // temp_str[i] = child;

     }

    for(int i=0; i<population; i++){
       str_arr[i] = temp_str[i];
       if(str_arr[i]==target){
           endloop = 1;
       }
    }
        generation = generation + 1;
        cout << "Generation: " << generation << "  DNA: " << str_arr[1] << endl;
    }while(endloop !=1);
    // endTime = clock();
    // execTime = (double)(endTime-startTime)/CLOCKS_PER_SEC;
    // cout << "execution time: " << execTime << endl;

   
    return 0;
}



void buildPopulation(string str_arr[],int population,string target, int target_length){
        int rando, a = target_length;
    char dna[23], randchar;
    cout << a << endl;
    for(int i=0;i<population;i++){
        
        for(int j=0;j <target_length;j++){ //adds characters to each element of the variable dna
            rando = rand()%3+1;
            
            // will make it randomly choose between uppercase letters, lower case letters and a space
            if (rando == 3){
                randchar = char(rand() % 25 +65);
            }else if(rando == 2 ){
                randchar = char(32);
            }else{
                 randchar = char(rand()%25 + 97);
            }
            
            dna[j] = randchar;
           
        }

        str_arr[i] = dna;
        
    }
    return;
}


void calculateFitness(string str_arr[],int population, int target_length, string target, float fitness[], float &sum){
    string a;
    float b;
    int c;
    

    for(int i=1;i<=population;i++){
        a = str_arr[i];
        b = 0;
        for(int j = 1; j <= 23; j++){
            if(a[i] == target[i]){
                b = b+1;
            }
        }
        fitness[i] = b / target_length;
        if(fitness ==0){
            sum = sum + 1;
        }else{
            
            sum = sum + fitness*10;
        }

    }
        return;
}


void buildMatingPool(float fit_arr[],int population,int matefac,int ind_arr[]){
//multiplies 10 to fitness to find number of raffle tickets for each index
//create a new array that will 
    int b;

    for(int i=0;i<population;i++){
        fit_arr[i] = fit_arr[i]*matefac;
    }
    int a;
    for (int j=0; j<population; j++){
       a = fit_arr[j];
        for(int k=0;k<a;k++){
            ind_arr[k] = fit_arr[j];
            b = b+1;
        }
    }

    cout << b << endl;

    return;
}

void breed(char par1[],char par2[], int target_length, char child[]){
    
    //method 1
    //find a midpoint between the function and then add the arrays together
    int randnum = rand() % target_length + 1;

    for(int i=0;i<target_length;i++){
        if(i < randnum){
            child[i] = par1[i];
        }else{
            child[i] = par2[i];
        }

        
    }

    //method 2
    //Adds random segments of the arrays together
    // int randnum2 = rand()%2 +1;
    // for(int i=0;i<target_length;i++){
    //     if(randnum == 1){
    //         child[i] = par1[i];
    //     }else{
    //         child[i] = par2[i];
    //     }

    // }
    
    return;

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