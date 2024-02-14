#include <bits/stdc++.h>
using namespace std;
class webA{
    private:
    string s = "Confidential Information";

    public:
    void admin(){
        cout << s << endl;
    }
};
class webB{
    private:
    string s = "Confidential Information accessed by friend";
    friend void spy(webB); // friend function is declared here
};
void spy(webB w) // Pre-declared friend function is defined here
{
    cout << w.s << endl;
}
int main()
{
    webA X; X.admin();
    webB Y; spy(Y); //friend function is called, object taken as argument 
    return 0;
}