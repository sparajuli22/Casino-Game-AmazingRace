//Satish Parajuli

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int rollDice(int sides);
int max(int a, int b);
int min(int a, int b);
int promptBet(int balance);
bool between(int small, int large, int user);
bool promptAgain(int balance);

int main()
{
    cout << "Welcome to Casino Royale. \nYou can choose any sided dice. \nWe roll 2 dices and if you roll a number between those 2 rolls you win.\n";
    srand(time(NULL));
    int sides;
    cout << "Enter the sides of the dice :";
    cin >> sides;
    bool temp;
    int balance = 500;

    do
    {

        int bet = promptBet(balance);

        int a, b, c;
        a = rollDice(sides);
        b = rollDice(sides);
        c = rollDice(sides);
        int maxRoll = max(a, b), minRoll = min(a, b), userRoll = c;
        cout << "\nCashino rolled " << a << " and " << b << endl;
        cout << "You need a roll between " << min(a, b) << " and " << max(a, b) << endl;
        cout << "Press Enter to roll ";
        getch();
        cout << "\nYou rolled " << c << endl;
        if (between(minRoll, maxRoll, userRoll))
        {
            cout << "You won\n";
            balance += bet;
        }
        else
        {
            cout << "You lost\n";
            balance -= bet;
        }
        cout << "New Balance is " << balance << endl;
        if (balance > 0)
            temp = promptAgain(balance);
        else
        {
            cout << "You are bankrupt.";
            temp = false;
        }
    } while (temp == true);
}

int rollDice(int sides)
{
    return rand() % (sides) + 1;
}

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int promptBet(int balance)
{
    int bet = 0;
    while (bet <= 0 || bet > balance)
    {
        cout << "\nPlace a bet ";
        cin >> bet;
        if (bet <= 0 || bet > balance)
            cout << "Invalid bet\n";
    }
    cout << "The bet is " << bet;
    return bet;
}

bool between(int small, int large, int user)
{
    if (user >= small && user <= large)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool promptAgain(int balance)
{
    char answer;
    cout << "Play again? y for yes and n for no ";
    cin >> answer;
    if (answer = 'y')
        return true;
    else
        return false;
}
