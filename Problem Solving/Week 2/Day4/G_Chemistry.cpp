#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;
        map<char, int> mp;
        for (char c : a)
        {
            mp[c]++;
        }
        int count = 0;
        for (auto [x,y]: mp)
        {
            cout<<x<<" "<<mp[x]<<" ";
            if ((mp[x] % 2) != 0)
            {
                count++;
            }
        }
        cout<<endl;
        // cout << count << endl;
        // if (k >= count || k == count - 1)
        // {
        //     cout << "YES" << endl;
        // }
        // else
        //     cout << "NO" << endl;
    }

    return 0;
}