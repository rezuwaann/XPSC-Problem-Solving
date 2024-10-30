#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }
    // for (auto value : mp)
    // {
    //     pair<string, string> p = value.first;
    //     bool ok = value.second;
    //     cout << p.first << " " << p.second<<" "<<ok<<endl;
    // }

    cout << mp.size();

    return 0;
}