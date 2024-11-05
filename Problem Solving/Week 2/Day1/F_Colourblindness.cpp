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
        bool flag = false;
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'R'))
            {
                if (b[i] != 'R')
                {

                    flag = true;
                }
            }
            else if (b[i] == 'R')
            {
                if (a[i] != 'R')
                {
                    flag = true;
                }
            }
        }
        if (flag == false)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}