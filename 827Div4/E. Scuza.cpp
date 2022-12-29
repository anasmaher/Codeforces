#include <bits/stdc++.h>
#define ll long long
#define loop(i,x) for(int i=0 ; i<x ; i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        vector<ll> v(n + 1), pref(n+1) , maxx(n+1);

        for(int i=1 ; i<=n ; i++)
        {
            cin >> v[i];
            pref[i] = pref[i-1]+v[i];
            maxx[i] = max(maxx[i-1],v[i]);
        }

        ll ans,res=0,x;
        while(k--)
        {
            cin >> x;
            ans = upper_bound(maxx.begin(),maxx.end(),x) - maxx.begin()-1;
            if(ans>=0) res  = pref[ans];
            cout << res << " ";
        }
        cout << "\n";
    }
}
