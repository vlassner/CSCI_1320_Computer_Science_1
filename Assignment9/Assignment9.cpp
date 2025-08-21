#include <iostream>
#include <ctime>
using namespace std;

int roll();
int oneTurn (bool n, int a);
bool loopGame(int n);

int main() {
    srand(time(NULL));
    int results;
    //calls loopGame fucntion
    //displays result
    results = loopGame(120);
    if (results == 1) {
        cout << "Hurray you won!!" << endl;
    }else{
        cout << "Aww too bad. You lost." << endl;
    }


    return 0;
}

int roll(){
    //rand() function with a range of 1-6
    return rand() % 6 + 1;
}

int oneTurn (bool n, int a){
    //do while loop that will continuously run until player gets 3 or holds
    //call roll function in loop
    //Takes sum each round
    //two modes computer and user
    //computer rolls until certain minimum(should be able to hold or roll)
    //returns sum of either player or computer
    //print each roll
    int rolls = 0, choice, m=3, turn_tot=0;

    if (n == 1){ 
        //human turn
        
        while(rolls > m || rolls < m){
            //Ask player if they want to hold or roll
            cout << "Would you like to roll or hold? Roll(1) or Hold(0)." << endl;
            cin >> choice;

            //Add rolls to turn total for later or subtracts if they roll a 3
            if (choice == 1){
                rolls = roll();
                turn_tot = turn_tot + rolls;
                
                if (rolls == 3){
                    turn_tot = abs(turn_tot - 6);
                    cout << "Roll: " << rolls << "  Turn Total: " << turn_tot << endl;
                    return turn_tot;
                }
                cout << "Roll: " << rolls << "  Turn Total: " << turn_tot << endl;
            
            }else{ //Makes turntotal negative to differentiate from player just ending the round by rolling a 3
                turn_tot = turn_tot*-1;
                return turn_tot;
            }
           
           if (turn_tot >= a-100)
                return turn_tot;
        }
        
    }else{
        //computer mode
        for (int i=1;i <= 5;i++){ // to ensure that the computer will roll at least 5 times before it can hold
            rolls = roll();
            turn_tot = turn_tot + rolls;
            
            if (rolls == 3){
                turn_tot = abs(turn_tot - 6);
                cout << "Roll: " << rolls << "  Turn Total: " << turn_tot << endl;
                return turn_tot;
            }
            
            cout << "Roll: " << rolls << "  Turn Total: " << turn_tot << endl;
        }

        int w;
        do{
            w = rand() % 3 +1;
            
            if (w == 1){ //Will roll the dice
                rolls = roll();
                turn_tot = turn_tot + rolls;
                cout << "Roll: " << rolls << "  Turn Total: " << turn_tot << endl;
                if (turn_tot >= a-100)
                    return turn_tot;
            
            }else{ //Holds
                turn_tot = turn_tot*-1;
                return turn_tot;
            }

            if (turn_tot >= a-100)
                return turn_tot;

        }while(rolls != 3);
        
        if (rolls == 3){
            turn_tot = turn_tot - 6;
            cout << turn_tot << endl;
            return turn_tot;
        }
    }    
}


bool loopGame(int n){
    //loop that will go till player or computer wins(oneTurn func)
    //Take in # of points to win
    //outputs 0 for computer win and 1 for human win
    //print each round for computer and user
        int p_sum = 100, c_sum = 100, p_tot, c_tot;
    while(p_sum <= n && c_sum <= n){
        
        cout << "Player's round." << endl;
        p_tot = oneTurn(1,n);

        if (p_tot < -3) { //hold part: it can identify when the player uses hold feature by making p_tot negative
            p_sum = -1*p_sum + p_tot;
            p_sum = abs(p_sum);
            c_sum = c_sum + p_tot;
        }else if (p_tot < 0 && p_tot >= -3){
            p_sum = p_sum + p_tot;

        }else // if the player rolls a three
        {
            if (p_tot == 3){ 
                p_sum = p_sum - 3;
            }else{
                p_sum = p_sum + p_tot;
            }
            c_sum = c_sum + 3;
        }
        
        cout << "Total player points: " << p_sum << endl << "Total comupter points: " << c_sum << endl;
        if (p_sum >= n){
            return 1;
        }

        cout << endl << "Computer's round." << endl;
        c_tot = oneTurn(0,n);
        if (c_tot < -3) { //hold part: it can identify when the player uses hold feature by making p_tot negative
            c_sum = -1*c_sum + c_tot;
            c_sum = abs(c_sum);
            p_sum = p_sum + c_tot;
        } else if(c_tot < 0 && c_tot > -3){
                c_sum = c_sum + c_tot;
        } else // if the player rolls a three
        {
            if (c_tot == 3){ 
                c_sum = c_sum - 3;
            }else{
                c_sum = c_sum + c_tot;
            }
            p_sum = p_sum + 3;
        }
        cout << "Total player points: " << p_sum << endl << "Total computer points: " << c_sum << endl;;
    }

    if (p_sum >= 120){
        return 1;
    }else{
        return 0;
    }

}