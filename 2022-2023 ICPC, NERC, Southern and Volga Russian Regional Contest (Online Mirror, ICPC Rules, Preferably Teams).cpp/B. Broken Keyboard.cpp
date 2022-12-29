#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s,x=""; cin >>s;
        bool ch = true;
        for(int i=0 ; i<n ; i++)
        {
            if(ch)
            {
                x+=s[i]; ch=false;
            }
            else
            {
                x+=s[i];x+=s[i];ch=true;i++;
            }
        }
        x==s ? cout <<"YES\n" : cout << "NO\n";
    }
}
