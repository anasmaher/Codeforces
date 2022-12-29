#include <bits/stdc++.h>
#define ll long long
#define sortv sort(v.begin(),v.end())
#define sortrv sort(v.rbegin(),v.rend())
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		string x,y; cin >> x >> y;

		for(int i=0 ; i<n ; i++)
		{
			if(x[i]=='B') x[i]='G';
			if(y[i]=='B') y[i]='G';
		}
		if(x==y) cout << "YES\n";
		else cout << "NO\n";
	}	
}	
