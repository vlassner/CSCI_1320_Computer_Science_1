#include <iostream>
#include <string>
#include <vector>

using namespace std;

void buildMatingPool(int fit_arr[],int population, int max_fit,int matefac,int ind_arr[]);

int main(){
int matefac = 10, ind_arr[200*matefac];

    return 0;
}

void buildMatingPool(int fit_arr[],int population, int max_fit,int matefac,int ind_arr[]){
    
    for(int i=0;i<population;i++){
        fit_arr[i] = fit_arr[i]*matefac;
    }

    int b = 0;
    for (int j=0;j<population;j++){
       int a = fit_arr[j];
        for(int k=0;k<a;k++){
            ind_arr[k] = fit_arr[j];
            
            if(ind_arr[k]!=0){
                b = b+1;
            }
        }
    }

}