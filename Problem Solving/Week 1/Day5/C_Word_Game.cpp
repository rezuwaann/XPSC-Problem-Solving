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
        map<string, vector<int>> mp;
        int n;
        cin >> n;

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for (auto [x, y] : mp)
        {
            for (int i : y)
            {
                if (y.size() == 1)
                {
                    ans[i] += 3;
                }
                else if (y.size() == 2)
                {
                    ans[i] += 1;
                }
            }
            
        }
        for (int i = 1; i <= 3; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}