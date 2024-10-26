#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << 1;
    }
    else if (n > m)
    {
        cout << 0;
    }
    else
        cout << (m - n) + 1;

    return 0;
}