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
        string s; cin >> s;
        int res=0;
        for(int i=0 ; i<s.size() ; i++)
        {
            res=max(res,s[i]-'a'+1);
        }
        cout <<res << '\n';
    }
}
