#include <bits/stdc++.h>
using namespace std;

class Message{
    public:
    int x;
    Message()
    {
        cout << "Message is just Constructed" << endl;
    }
    ~ Message()
    {
        cout << "Message is just Destructed";
    }
};
void demo(void)
{
    Message N; N.x = 10;
    cout << "N: " << N.x << endl;
}
int main()
{
    Message M;
    for (int i = 5; i >= 0 ; i--)
    {
        cout << i << " ";
    } cout << endl;
    
    return 0;
}

 
