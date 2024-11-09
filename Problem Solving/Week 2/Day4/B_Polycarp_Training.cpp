#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int day = 0, problem = 1;
    while (!s.empty())
    {

        if (s.lower_bound(problem) != s.end())
        {
            day++;
            s.erase(s.lower_bound(problem));
            problem++;
        }
        else
            break;
    }
    cout << day;

    return 0;
}