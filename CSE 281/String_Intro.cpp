#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); /* cin.tie(0); cout.tie(0); */
#define endl '\n'

int main ()
{
    optimize();
    string s1 = "Hello World!";  // String is a group of characters
    cout << s1 << endl;

    string s2, s1s2, line;

    cin >> s2;
    cout << s2 << endl;
    s1 = s1 + ' ';
    s1s2 = s1 + s2; // concatenation
    s1s2 = s1 + ' ' + s2;
    s1s2 = s1 + ' ' + "string" + '-';
    s1 += s2;

    char c; cin >> c;
    getline(cin, line);
    cout << c+line << endl;


    string s(5, ' ');
    cout << s << endl;
    for(int i = 0; i<5; i++) cin >> s[i];

    if(s1 == s2)  // string comparison
    {
        cout << "equal" << endl;
    }
    else{
        cout << "not-equal" << endl;
    }
    string sc = s;  // copy string
    sort(s.begin(), s.end());
    int size  = unique(s.begin(), s.end()) - s.begin();
    
    return 0;
}