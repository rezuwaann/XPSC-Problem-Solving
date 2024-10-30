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
        int a;
        cin >> a;
        string s;
        cin >> s;
        int f=s.find('B');
        int l=s.rfind('B');
        cout << (l-f) + 1 << endl;
    }

    return 0;
}