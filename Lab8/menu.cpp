//menu function 
#include <iostream>
using namespace std;

int menu();

int main (){
    int choice, finish = 6;
    do { //do while loop to make it continuous
        choice = menu();
        
        
    }
    while(choice != finish);

    return 0;
}

//cout statements as a menu for user
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