#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
	
	int t; cin >> t;

	while(t--)
	{
		ll n; cin >> n;
		ll vis[200001]={0};
		vector<ll>v;

		int res=0;

		for(int i=0 ; i<n ; i++)
		{
			int x; cin >> x;
			v.push_back(x);
		}

		for(int i=n-1 ; i>=0 ; i--)
		{
			if(vis[v[i]]==0)
			{
				vis[v[i]]++;
			}
			else
			{
				res=i+1;
				break;
			}
		}
		cout << res << "\n";
	}
}
