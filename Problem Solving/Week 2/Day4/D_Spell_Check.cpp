#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        if (n == 5)
        {

            map<char, int> mp;
            for (char c : a)
            {
                mp[c]++;
            }

            if ((mp['T'] == 1) && (mp['i'] == 1) && (mp['m'] == 1) && (mp['u'] == 1) && (mp['r'] == 1))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}