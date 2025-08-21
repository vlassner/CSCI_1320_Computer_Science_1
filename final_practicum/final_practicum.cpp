#include <iostream>
#include <ctime>

using namespace std;

void fill_array(int A[],int minVal, int maxVal, int size_A);
int fuse_universe(int ying[], int yang[],int size_y);

int main(){
    int arr_size = 30, minVal, maxVal, Array1[arr_size], Array2[arr_size], fus_val;
    srand(time(NULL));//allows numbers to be more random

    //Prompts the user to enter the max and min values respectivly
    cout << "Enter the minimum value and the maximum value: " << endl;
    cin >>  minVal >> maxVal;

    //uses fill_array function to create two arrays with elements that will range from max and min value
    fill_array(Array1, minVal, maxVal, arr_size);
    fill_array(Array2, minVal, maxVal, arr_size);

    fus_val = fuse_universe(Array1,Array2,arr_size);

    cout << "The value is " << fus_val << endl;

    return 0;
}

void fill_array(int A[],int minVal, int maxVal, int size_A){
    //function to fill the array A with random integers between values of minVal and maxVal
    //uses rand() function to generate the random numbers for each element
    //for loop to index into array
    for(int i=0;i<size_A;i++){
        A[i] = rand() % (maxVal-minVal) + minVal;
    }
    
}

int fuse_universe(int ying[], int yang[],int size_y){
    int fusion_success = 1;
    
    //for loop to add the corresponding elements of ying and yang together and multiply them to fusion_success
    for(int i=0;i<size_y;i++){
        fusion_success = (ying[i]+yang[i])*fusion_success;
    }

    return fusion_success;
}