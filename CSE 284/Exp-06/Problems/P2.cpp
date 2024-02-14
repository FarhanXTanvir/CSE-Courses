/*
2. Write a C++ program to find the number and sum of all integer between 100 and 200 which are 
divisible by 11 with friend function.
*/

#include <bits/stdc++.h>
using namespace std;
class number{
    public:
    int i;
    friend void div11(number);
};
void div11(number x)
{
    int sum = 0, count = 0;
    
    for(x.i=100; x.i <= 200; x.i++)
    {
        if(x.i%11==0)
        {
            count++;
            sum += x.i;
        };
    }
    cout << "The numbers divisible by 11 are: " << count;
    cout << endl << "Sum of these numbers: " << sum << endl;
}
int main()
{
    number x;
    div11(x);
    return 0;
}