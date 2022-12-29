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
		ll n,res=0; cin >> n;
		string s; cin >> s;
		vector<ll>v;
		
		for(int i=0 ; i<n ; i++)
		{
			if(s[i]=='L')
			{
				res+=i;
				v.push_back(n-1-i-i);
			}
			else
			{
				res+=n-1-i;
				v.push_back(i-(n-1-i));
			}

		}
		sortrv;
		ll ss = 0;
		for(int i=0 ; i<n ; i++)
		{
			res+= max(ss,v[i]);
			cout << res << " ";
		}
		cout << "\n";
	}
}	
