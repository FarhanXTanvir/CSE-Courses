/*  2. Take 6 integer values (0 to 5) into a stack and then find the factorial of
each stack element. Store the outputs in another stack. Print the output in the
following way:
Factorial : 0 = 1
Factorial : 1 = 1
Factorial : 2 = 2 */

/* #include <bits/stdc++.h>
using namespace std;

int main ()
{
    stack <int> s, f;
    int n, fact = 1;
    for(int i = 0; i <= 5; i++)
    {
        s.push(i);
    }
     for(int i = 5; i >= 0; i--)
    {
        s.push(i);
    } 
    while(!s.empty())
    {
        if(s.top()==0)
        {
            f.push(fact);
            s.pop();
            continue;
        }
        fact = fact*s.top();
        f.push(fact);
        s.pop();
    }
    for(int i=0; i<=5; i++)
    {
        cout << "Factorial: "<< i << " = " << f.top() << endl;
        f.pop();
    }

    return 0;
}
 */
#include <bits/stdc++.h>
using namespace std;

int fact (int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * fact (n - 1);
    }
}

int main() {
    stack<int> s,f;

    for (int i = 0; i <= 5; i++) {
        s.push(i);
    }

    while (!s.empty()) {
        int n = s.top();
        s.pop();
        f.push(fact(n));
    }
    for (int i = 0; i <= 5; i++) 
    {
        cout << "Factorial : " << i << " = " << f.top() << endl;
        f.pop();
    }

    return 0;
}