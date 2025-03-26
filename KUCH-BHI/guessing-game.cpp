//    c++ guessing-game.cpp -o guessing-game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    cout << "Guess My Number Game\n\n";
    do{
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        attempts++;
        if(guess > number){
            cout << "Too high!\n\n";
        }
        else if(guess < number){
            cout << "Too low!\n\n";
        }
        else{
            cout << "\nCorrect! You got it in " << attempts << " attempts!\n";
        }
    }while(guess != number);
    return 0;
}