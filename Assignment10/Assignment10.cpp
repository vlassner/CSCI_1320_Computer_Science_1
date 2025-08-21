#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int menu();
void newAccount(string accountName[],int accountPassword[], int length);
void deposit(string accountName[], int accountBalance[], int accountPassword[], int length);
void withdraw(string accountName[], int accountBalance[], int accountPassword[], int length);
void balance(string accountName[], int accountBalance[], int accountPassword[], int length);
void gamblingldx(string accountName[], int accountBalance[], int accountPassword[],int gambling[], int length);
void switchValues(int accountBalance[],int gambling[], int gam_num, int i);

int main(){
    string accountName[100] = {};
    int accountBalance[100] = {0}, accountPassword[100] = {0}, length = 100, choice;
    int gambling[10] = {0, 500, 10, 1000, 20, 5000, 30, 10000, 40, 50000};
    srand(time(NULL));

do {
        choice = menu();
        switch (choice)
        {
                case (1):
                    newAccount(accountName, accountPassword, length);
                    break;
                case (2):
                    deposit(accountName, accountBalance, accountPassword, length);
                    break;
                case (3):
                    withdraw(accountName, accountBalance, accountPassword, length);
                    break;
                case (4):
                    balance(accountName, accountBalance, accountPassword, length);
                    break;
                case (5):
                    gamblingldx(accountName,accountBalance, accountPassword, gambling, length);
                    break;
                case (6):
                    cout << "Thank you and goodbye" << endl;
                    break;
            


        }
        
        
    } while(choice != 6);
    return 0;
}

//Menu Function
int menu(){
    int choice;
    cout << "Pick one of the following:\n" <<
        "1. Make an account.\n" <<
        "2. Deposit Money.\n" <<
        "3. Withdraw Money.\n" <<
        "4. Show Balance.\n" <<
        "5. Gamble.\n" <<
        "6. Finish.\n";
        cin >> choice;
        return choice;

}

//New account function
void newAccount(string accountName[],int accountPassword[],int length){
    int choice;
    for (int i = 0; i<length; i++){//uses a for loop to index into array
    if (accountName[i] == "" && accountPassword[i] == 0){ //prevents accounts from being over written
        cout << "Enter the desired user name: " << endl;
        cin >> accountName[i];

        cout << "Enter the desired password name: " << endl;
        cin >> accountPassword[i];
    }//prompts the user if the would like to make another one or not
        cout << "Would you like to make another account: Yes(1) No(0)." << endl;
        cin >> choice;
        if(choice == 0){
            return;
        }
    }
}

//Deposit function
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

            for(i=0; i < length; i++){

            //loop to find password index and if yes then it will ask the user how much they'd
            //like to deposit and print current balance
                if (accountPassword[i] == password){
                    cout << "How much would you like to deposit?" << endl;
                    cin >> dep_mon;
                    accountBalance[i] = accountBalance[i] + dep_mon; //adds the deposit amount to existing balance
                    cout << "The current balance is " << accountBalance[i] << endl;
                }
            }
        }
    }

}

//Withdraw function
void withdraw(string accountName[], int accountBalance[], int accountPassword[], int length){
    string username;
    int password, with_mon;
    //similar to desposit function as it uses for loops to find index for name and password
    cout << "Enter your name: " << endl;
    cin >> username;
    
    for(int i = 0; i < length;i++){
        if(accountName[i] == username){
            cout << "Enter your password: " << endl;
            cin >> password;
            
            for(i=0; i < length; i++){
                if (accountPassword[i] == password){
                    cout << "How much would you like to withdraw?" << endl;
                    cin >> with_mon;
                    
                    if (accountBalance[i] >= with_mon)
                    accountBalance[i] = accountBalance[i] - with_mon; //subtracts withdraw amount from current balance
                    
                    cout << "The current balance is " << accountBalance[i] << endl;
                }
            }
        }
    }

}

//Balance Function
void balance(string accountName[], int accountBalance[], int accountPassword[], int length){
    string username;
    int password, with_mon;
    
    cout << "Enter your name: " << endl;
    cin >> username;
    
    for(int i = 0; i < length;i++){
        if(accountName[i] == username){
            cout << "Enter your password: " << endl;
            cin >> password;
            
            for(i=0; i < length; i++){
                if (accountPassword[i] == password){
                    cout << "The current balance is " << accountBalance[i] << endl;
                    return;
                }

            }
            cout << "Wrong Password!!" << endl << endl;
            return;
        }

    }
    cout << "Cannot find name." << endl << endl;
    return;

}

//Gambling Function
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
                    if (accountBalance[i] >= 500){ //checks to make sure that the balance is equal or above minimum
                        gam_num = rand()% 9; //produces random number from 0 to 9
                        switchValues(accountBalance, gambling, gam_num, i); //function that will switch the value of the account and gambling array
                        cout << "The new balance is " << accountBalance[i] << endl << endl;
                        return;

                    }else{
                        cout << "The balance is less than the minimum balance for gambling!" << endl << endl;
                        return;
                    }
                }
            }
            cout << "Wrong Password!!" << endl << endl;
            return;
        }
    }
    cout << "No account!!" << endl << endl;
    return;
}

void switchValues(int accountBalance[],int gambling[], int gam_num, int i){
    int temp;
    //switches the values of the account balance of the random index value from the gambling array
    accountBalance[i] = temp;
    accountBalance[i] = gambling[gam_num];
    gambling[gam_num] = temp;

}