#include <iostream>
#include <string>

using namespace std;

void balance(string accountName[], int accountBalance[], int accountPassword[], int length);

int main(){
    string accountName[100] = {};
    int accountBalance[100] = {0}, accountPassword[100] = {0}, length = 100;


    return 0;
}

void balance(string accountName[], int accountBalance[], int accountPassword[], int length){
    string username;
    int password, with_mon;
    
    //prompts the user to enter name for indexing for loop
    cout << "Enter your name: " << endl;
    cin >> username;
    
    //for loop that will match username to certain element of the arrays
    for(int i = 0; i < length; i++){
        if(accountName[i] == username){
            cout << "Enter your password: " << endl;
            cin >> password;
            
            //Does the same thing but for the password
            for(i=0; i < length; i++){
                if (accountPassword[i] == password){
                    cout << "The current balance is " << accountBalance[i] << endl;
                    return;
                }
                    cout << "Wrong Password!!" << endl;
                    return;
                

            }
        }else{
            cout << "Cannot find name." << endl;
            return;
        }
    }

}