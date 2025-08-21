#include <iostream>
#include <string>

using namespace std;

void calculateFitness(string arr[],int arr_size, int target, string target_str,double fitness[]);

int main(){


    return 0;
}

void calculateFitness(string arr[],int arr_size, int target_length, string target_str, double fitness[]){
    string a;

    for(int i=0;i<arr_size;i++){
        arr[i] = a;
        for(int j = 0; j < target_length; j++){
            if(a[i] == target_str[i]){
                fitness[i] = fitness[i] + 1;
            }
        }
        fitness[i] = fitness[i]/target_length;
    }
    
}


