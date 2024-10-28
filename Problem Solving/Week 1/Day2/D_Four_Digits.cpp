#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    int n = 4 - a.size();
    while (n--)
    {
        cout << "0";
    }
    cout << a;

    return 0;
}