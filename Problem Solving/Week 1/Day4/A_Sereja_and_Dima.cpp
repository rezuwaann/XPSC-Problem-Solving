#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }

    int sereja = 0, dima = 0;
    int it = 1;

    while (!dq.empty())
    {
        int mx = max(dq.front(), dq.back());
        int left = dq.front(), right = dq.back();

        if (mx == left)
        {
            dq.pop_front();
        }
        else
            dq.pop_back();

        if ((it % 2) != 0)
        {
            sereja += mx;
        }
        else
            dima += mx;

        it++;
    }
    cout << sereja << " " << dima;
    return 0;
}