#include <iostream>
using namespace std;

int main(){
    //number of 
    int rand_num, sum, mode, roll_hold,roll_holdc,i;
    
    cout << "Enter human mode (1) or computer mode (0):";
    cin >> mode;

    //first dice roll
    rand_num = rand() % 6 + 1;
    cout << rand_num << endl;
    sum = 0;
    sum = rand_num + sum;
    srand(time(0));

//Human mode = gives user option to hold the dice or roll
    if (mode == 1){ 
        do{    
            cout << "Would you like to hold(0) or continue rolling(1)?" << endl;
            cin >> roll_hold; //gives user choice to hold dice or to roll
            if (roll_hold == 1){
                rand_num = rand() % 6 + 1;
            }

        cout << rand_num << endl;
         sum = sum + rand_num; //sums the numbers rolled each round
         cout << sum << endl;
        } while (rand_num != 3);
    
        
    }

    if (mode == 0){

            
            for (i = 0; i < 5; i++) { //a loop that will run a certain amount of times
               if (rand_num != 3){
               rand_num = rand() % 6 + 1;
               sum = sum + rand_num;
               cout << rand_num << endl;
               }
            }
        do {
            roll_holdc = rand()*4+1;
            if (roll_holdc > 2)    
                rand_num = rand() % 6 + 1;
        cout << rand_num << endl;
         sum = sum + rand_num; //finds the sum after each round
         
        } while (rand_num != 3);
        cout << "The sum of the rolls is " << sum << endl;
    }  

    
    
    return 0;
}