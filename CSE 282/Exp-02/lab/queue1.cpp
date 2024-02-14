#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int>myqueue;
     
    myqueue.push(42); 
    myqueue.push(11);
    myqueue.push(5);
    myqueue.push(71);
    myqueue.push(43);

    while(!myqueue.empty())
    {
        cout << myqueue.front() <<" ";
        myqueue.pop(); 
    }
    return 0;
}