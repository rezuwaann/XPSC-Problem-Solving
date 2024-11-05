#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a,b;
    cin>>a>>b;
    int d=0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]!=b[i])
        {
            d++;
        }
        
    }
    cout<<d;
 
    return 0;
}