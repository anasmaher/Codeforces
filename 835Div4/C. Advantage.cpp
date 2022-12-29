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

        for(int i=0 ; i<n ; i++)
        {
            cin >> v[i];
        }

        vector<int>pre(n);
        pre[0]=v[0];

        for(int i=1 ; i<n ; i++)
        {
            pre[i]=max(pre[i-1],v[i]);
        }

        vector<int>suf(n);
        suf[n-1]=v[n-1];
        for(int i=n-2 ; i>=0 ; i--)
        {
            suf[i]=max(suf[i+1],v[i]);
        }

        for(int i=0 ; i< n ;i++)
        {
            if (i == 0)
                cout << v[i]-suf[i + 1] << " ";

            else if (i == n - 1)
                cout << v[i]-pre[i - 1] << " ";

            else
                cout << v[i]-max(pre[i - 1], suf[i + 1]) << " ";
        }
        cout << '\n';
    }
}
