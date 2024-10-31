#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, bool> mp;
    while (n--)
    {
        string a;
        cin >> a;
        if (!mp[a])
        {
            mp[a] = true;
            cout << "OK" << endl;
        }
        else
        {
            // int n = a.size();
            // int lastchar = a[n - 1];
            while (true)
            {
                mp[b] = true;
                string b = a + lastchar;
                cout << b << endl;
                if (!mp[b])
                {
                    break;
                }
            }
        }
    }

    return 0;
}