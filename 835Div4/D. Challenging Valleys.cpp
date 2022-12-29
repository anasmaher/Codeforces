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

        bool ch=true;
        for(int i=0 ; i<n-1;i++)
        {
            if(!ch) break;
            if(v[i]<v[i+1])
            {
                ch = false;
                while(v[i+1]>=v[i] && i<n-1) i++;
                if(i==n-1) {cout << "YES\n"; break;}
                else {cout << "NO\n"; break;}
            }
        }
        if(ch) cout << "YES\n";
    }
}
