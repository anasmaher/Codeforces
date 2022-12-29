#include <bits/stdc++.h>
#define ll long long
#define sort(v) sort(v.begin(),v.end())
#define sortrv sort(v.rbegin(),v.rend())
#define loop(x,n) for(int x=0 ; x<n ; x++)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		vector<vector<int>>v(26);

		for(int i=0 ; i<s.size() ; i++)
		{
			v[s[i]-'a'].push_back(i);
		}

		vector<int>res;
		if(s[0]<s.back())
		{
			for(int i=s[0]-'a' ; i<=s.back()-'a' ; i++)
			{
				for(auto z:v[i]) res.push_back(z);
			}
		}
		else
		{
			for(int i=s[0]-'a' ; i>=s.back()-'a' ; i--)
			{
				for(auto z:v[i]) res.push_back(z);
			}
		}
		cout << abs(s[0]-s.back()) << " " << res.size() << "\n";
		for(auto j:res) cout << j+1 << " ";

		cout << "\n";
	}
}
 
