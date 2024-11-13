#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n), v2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }

    int l = 0, r = 0;
    ;
    long long int ans = 0;
    while (l < n && r < m)
    {
        int count1 = 0, count2 = 0;
        int current = v[l];
        while (l < n && current == v[l])
        {
            l++;
            count1++;
        }
        while (r < m && current > v2[r])
        {
            r++;
        }
        while (r < m && current == v2[r])
        {
            r++;
            count2++;
        }
        ans += (1LL * count1 * count2);
    }
    cout << ans;

    return 0;
}