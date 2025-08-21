#include <iostream>
#include <string>

using namespace std;

void deposit(string accountName[], int accountBalance[], int accountPassword[], int length);

int main (){
    string accountName[100] = {};
    int accountBalance[100] = {0}, accountPassword[100] = {0}, length = 100;
    deposit(accountName, accountBalance, accountPassword, length);


    return 0;
}


void deposit(string accountName[], int accountBalance[], int accountPassword[], int length){
    string username;
    int password, dep_mon;
    //prompts user for name to find index
    cout << "Enter your name: " << endl;
    cin >> username;
    
    for(int i = 0; i < length;i++){
        //if it meets the requirements then it will prompt user for password if not then error
        if(accountName[i] == username){
            cout << "Enter your password: " << endl;
            cin >> password;
            
            //loop to find password index and if yes then it will ask the user how much they'd
            //like to deposit and print current balance
            for(i=0; i < length; i++){
                
                if (accountPassword[i] == password){
                    cout << "How much would you like to deposit?" << endl;
                    cin >> dep_mon;
                    accountBalance[i] = accountBalance[i] + dep_mon;//adds the deposit amount to existing balance
                    cout << "The current balance is " << accountBalance[i];
                }
            }
        }
    }

    }


