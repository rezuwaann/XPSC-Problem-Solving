#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1);
    vector<int> count(n + 1);
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = n; i >= 1; i--)
    {
        s.insert(a[i]);
        count[i] = s.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int pos;
        cin >> pos;
        cout << count[pos] << endl;
    }

    return 0;
}