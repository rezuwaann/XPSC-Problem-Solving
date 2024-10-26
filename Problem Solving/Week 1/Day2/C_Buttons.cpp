#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    
    int count = 0, press = 0;
    if (a == b)
    {
        cout << a + b;
    }
    else
    {

        count += max(a, b);

        if (a > b)
        {
            a--;
            count += max(a, b);
        }
        else
        {
            b--;
            count += max(a, b);
        }

        cout << count;
    }

    return 0;
}