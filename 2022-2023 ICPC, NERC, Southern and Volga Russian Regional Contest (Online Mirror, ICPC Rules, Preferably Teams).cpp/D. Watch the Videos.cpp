#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,m; cin >> n >> m;
    ll res=0;
    vector<int>v(n); for(int i=0 ; i<n ; i++) {cin >>v[i]; res+=v[i];}
    sort(v.begin(),v.end());

    int l=0,r=n-1;
    while(l<r)
    {
        if(v[l]+v[r]>m) {r--;res++;}
        else {l++;r--;}
    }
    cout << ++res << '\n';
}
