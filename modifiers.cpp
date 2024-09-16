#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a = "Mahmud";
    // string b = "Jannat";
    // a = a + b; ai line ke nicher moto koreo likha jai
    // a += b;
    // a.append(b); // a += b and this line same output dibe
    // cout << a << endl;
    // cout << b << endl;
    // a = "HelloA"; //works
    // a = a + b; //works
    // a = a + 'A; //works
    // a[7]='A'; //not work
    // a.push_back('T');//works
    // a.pop_back();
    // a.pop_back();
    // a.pop_back();

    // a = "Tahmina"; // ata ke abar aivabeo likha jai
    // a.assign("Jannat");
    // cout << a << endl;

    // string j = "JannatulFerdosyTahmina";
    // // j.erase(6); // avabe korle only o word delete kora jabena, indexer por theke sob delete kore dibe
    // j.erase(4,5);
    // cout << j << endl;

    // string j = "JannatulFerdosy";
    // // j.replace(4, 4, "XX");
    // j.replace(4, 0, "XX");
    // cout << j << endl;

    string j = "JannatulFerdosy";
    // j.insert(8,"Mahmud");//same
    j.replace(8, 0, "Mahmud");
    cout << j << endl;

    return 0;
}