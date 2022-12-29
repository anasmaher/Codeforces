#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        bool ch = false;
        for(int i=2 ; i*i<=n ; i++)
        {
            if(n%i==0)
            {
                cout << n/i << " " << n-(n/i) << '\n'; ch =true; break;
            }
        }
        if(!ch)cout << 1 << " " << n-1 << '\n';
    }
}
