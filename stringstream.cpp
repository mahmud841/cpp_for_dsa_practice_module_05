#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout<<s<<endl;
    stringstream ss(s);
    ss<<s;
    string word;
    int cnt = 0;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ss >> word;
    // cout << word << endl;
    // ai kajta akhon while loop diye korbo
    // while (ss >> word)
    // {
    //     cout << word << endl;
    // }
    while (ss >> word)
    {
        cnt++;
    }
    cout << cnt<< endl;

    return 0;
}