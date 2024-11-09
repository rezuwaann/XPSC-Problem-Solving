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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int a;
            string b;
            cin >> a >> b;
            for (char c : b)
            {
                if (c == 'U')
                {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else
                        v[i]--;
                }
                else if (c == 'D')
                {
                    if (v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else
                        v[i]++;
                }
            }
        }
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}