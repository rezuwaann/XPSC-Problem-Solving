#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> v2;
    for (int i : v)
    {
        if (i != m)
            v2.push_back(i);
    }

    v = v2;
    for (int i : v)
        cout << i << " ";
    return 0;
}