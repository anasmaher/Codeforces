#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>v(n);

        ll cntr=0,res=0,x=-1,y=-1;
        for(int i=0 ; i<n ; i++)
        {
            cin >> v[i];
            if(v[i]==0) res+=cntr; else cntr++;
            if(v[i]==0 && x==-1) x=i;
            else if(v[i]==1) y=i;
        }

        if(x!=-1)
        {
            v[x]=1;
            ll tmp1=0,tmpcntr1=0;
            for(int i=0 ; i<n; i++)
            {
                if(v[i]==0) tmp1+=tmpcntr1;
                else tmpcntr1++;
            }
            res=max(res,tmp1); v[x]=0;
        }

        if(y!=-1)
        {
            v[y]=0;
            ll tmp2=0,tmpcntr2=0;
            for(int i=0 ; i<n; i++)
            {
                if(v[i]==0) tmp2+=tmpcntr2;
                else tmpcntr2++;
            }
            res=max(res,tmp2);
        }
        cout << res << '\n';
    }
}
