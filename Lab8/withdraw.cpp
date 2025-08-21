#include <iostream>
#include <string>

using namespace std;

void withdraw(string accountName[], int accountBalance[], int accountPassword[], int length);

int main (){
    string accountName[100] = {};
    int accountBalance[100] = {0}, accountPassword[100] = {0}, length = 100;
    withdraw(accountName, accountBalance, accountPassword, length);


    return 0;
}


void withdraw(string accountName[], int accountBalance[], int accountPassword[], int length){
    string username;
    int password, with_mon;
    
    cout << "Enter your name: " << endl;
    cin >> username;
    
    //similar to desposit function as it uses for loops to find index for name and password
    for(int i = 0; i < length;i++){
        if(accountName[i] == username){
            cout << "Enter your password: " << endl;
            cin >> password;
            
            for(i=0; i < length; i++){
                if (accountPassword[i] == password){
                    cout << "How much would you like to withdraw?" << endl;
                    cin >> with_mon;
                    
                    if (accountBalance[i] >= with_mon)
                    accountBalance[i] = accountBalance[i] - with_mon;//subtracts withdraw amount from current balance
                    
                    cout << "The current balance is " << accountBalance[i];
                }
            }
        }
    }

    }