#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    // int cnt = 0;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    if (sum % 2 != 0)
    {
        for (int num : v)
        {
            if (num % 2 != 0)
            {
                sum -= num;
                break;
            }
        }
    }
    cout << sum;

    return 0;
}