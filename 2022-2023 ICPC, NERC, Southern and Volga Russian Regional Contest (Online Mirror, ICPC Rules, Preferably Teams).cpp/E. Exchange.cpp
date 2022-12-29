#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,a,b; cin >> n >> a >> b;
        if(a<=b) if(n%a) cout << n/a+1 << '\n';else cout << n/a << '\n'; else cout << 1 << '\n';
    }
}
