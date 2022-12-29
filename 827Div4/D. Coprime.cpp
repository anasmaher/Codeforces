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
        int n; cin >> n;
         vector<int> vis(1001);
        loop(i,n)
        {
            int x; cin >> x;
            vis[x] = i+1;
        }

        int res = -1;
        loop(i,1001)
        {
            loop(j,1001)
            {
                if(gcd(i,j)==1 && vis[i]>0&&vis[j]>0) res = max(res,vis[i]+vis[j]);
            }
        }
        cout << res << '\n';
    }
}
