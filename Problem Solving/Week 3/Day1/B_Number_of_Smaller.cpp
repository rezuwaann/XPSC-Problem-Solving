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
    int r = 0, l = 0, cnt = 0;
    while (r < m)
    {
        if (l < n && v2[r] > v[l])
        {
            cnt++;
            l++;
        }
        else
        {
            r++;
            cout << cnt << " ";
        }
    }

    return 0;
}