// https://codeforces.com/problemset/problem/1791/C
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
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (a[l] == a[r])
            {
                break;
            }
            else
            {
                n -= 2;
                l++;
                r--;
            }
        }
        cout << n << endl;
    }

    return 0;
}