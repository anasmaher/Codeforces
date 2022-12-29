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
        vector<string>v(8);


        loop(i,8) cin >> v[i];
        vector<string>h(8);
        loop(i,8)
        {
            loop(j,8)
            {
                h[i][j] = v[j][i];
            }
        }
        bool c= false;
        loop(i,8)
        {
            if(v[i]=="RRRRRRRR")
            {
                c= true; break;
            }
        }
        if(c)
        {
            cout << "R\n"; continue;
        }
        else
        {
            cout << "B\n";
        }
    }
}
