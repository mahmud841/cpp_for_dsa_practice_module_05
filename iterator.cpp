#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string s;
    // cin >> s;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    // //this calld iterate kora
    // string s;
    // cin >> s;
    // cout<<*s.begin()<<endl;
    // // cout<<*s.end()<<endl;
    // cout<<*(s.end()-1)<<endl;

    // string s;
    // string::iterator it;
    // cin >> s;
    // for (it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    string s;
    cin >> s;
    // for (string::iterator it = s.begin(); it < s.end(); it++)
        for (auto it = s.begin(); it < s.end(); it++)
        {
            cout << *it << endl;
        }

    return 0;
}