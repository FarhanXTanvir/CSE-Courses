/*
1. Suppose you have a Savings Account with an initial amount of 500 and you
have to add some more amount to it. Create a class ’AddMoney’ with a data
member named ’amount’ with an initial value of 500. Now make two constructors
of this class as follows:
• without any parameter - no amount will be added to the Savings Account.
• having a parameter which is the amount that will be added to the Savings
Account.
Create an object of the ’AddMoney’ class and display the final amount in the
Savings Account.
*/
#include <bits/stdc++.h>
using namespace std;
class AddMoney {          
        int amount = 500;
        public :
        AddMoney()
        {

        }
        AddMoney(int s)
        {
            amount = amount + s;
        }
        void displayAmount(int n)
        {
            cout << "Final Amount of Object " << n << ": " << amount << endl;
        }
};
int main()
{
    AddMoney X;
    X.displayAmount(1);

    AddMoney Y(200);
    Y.displayAmount(2);
    
    return 0;
}