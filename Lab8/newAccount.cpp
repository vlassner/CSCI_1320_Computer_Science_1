//
#include <iostream>
#include <string>

using namespace std;

void newAccount(string accountName[],int accountPassword[], int length);

int main(){
    string accountName[100] = {};
    int accountPassword[100] = {0}; 
    int length = 100;

    newAccount(accountName, accountPassword, length);
    

    return 0;

}

void newAccount(string accountName[],int accountPassword[],int length){
    int choice;
    for (int i = 0; i<length; i++){ //uses a for loop to index into array
    if (accountName[i] == "" && accountPassword[i] == 0){ //prevents accounts from being over written
        cout << "Enter the desired user name: " << endl;
        cin >> accountName[i];

        cout << "Enter the desired password name: " << endl;
        cin >> accountPassword[i];
    }//prompts the user if the would like to make another one or not
        cout << "Would you like to make another account: Yes(1) No(2)." << endl;
        cin >> choice;
        if(choice == 2){
            return;
        }
    }
}