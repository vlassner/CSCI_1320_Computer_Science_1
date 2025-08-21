#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void gamblingldx(string accountName[], int accountBalance[], int accountPassword[],int gambling[], int length);
void switchValues(int accountBalance[],int gambling[], int gam_num);

int main(){

string accountName[100] = {}; 
int accountBalance[100] = {0}, accountPassword[100] = {0}, length = 100;
int gambling[10] = {0, 500, 10, 1000, 20, 5000, 30, 10000, 40, 50000};
srand(time(NULL));


    return 0;
}

void gamblingldx(string accountName[], int accountBalance[], int accountPassword[],int gambling[], int length){
    string username;
    int password, gam_num;
    
    cout << "Enter your name: " << endl;
    cin >> username;
    
    for(int i = 0; i < length;i++){
        
        if(accountName[i] == username){
            cout << "Enter your password: " << endl;
            cin >> password;
            
            for(i=0; i < length; i++){
                if (accountPassword[i] == password){
                    cout << accountBalance[i] << endl;
                    if (accountBalance[i] >= 500){//checks to make sure that the balance is equal or above minimum
                        gam_num = rand()% 9;//produces random number from 0 to 9
                        switchValues(accountBalance, gambling, gam_num, i);//function that will switch the value of the account and gambling array
                        cout << "The new balance is " << accountBalance[i] << endl;

                    }else{
                        cout << "The balance is less than the minimum balance for gambling!" << endl;
                        return;
                    }
                }else{
                    cout << "Wrong Password!!" << endl;
                    return;
                }
            }
        }else{
            cout << "No account!!" << endl;
            return;
        }
    }

}

void switchValues(int accountBalance[],int gambling[], int gam_num, int i){
    int temp;
    //switches the values of the account balance of the random index value from the gambling array
    accountBalance[i] = temp;
    accountBalance[i] = gambling[gam_num];
    gambling[gam_num] = temp;

}