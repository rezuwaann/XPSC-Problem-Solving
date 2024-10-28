#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    vector<int> frq(26,0);

    for (char c : s)
    {
        frq[c - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (frq[i] == 0)
        {
            char a = 'a' + i;
            cout << a;
            return 0;
        }
    }
    cout<<"None";

    return 0;
}