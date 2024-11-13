#include <bits/stdc++.h>
using namespace std;

#define yes cout<<"Yes"<<endl; 
#define no cout<<"No"<<endl; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int totalgame = a + b + c;

    // cout << totalgame << endl;
    int mypoint = a + (b * 0.5), oppoint = (b * 0.5) +c;
    int gameleft = 4 - totalgame;
    if (mypoint + gameleft > oppoint)
    {
        yes
    }
    else
        no

    return 0;
}