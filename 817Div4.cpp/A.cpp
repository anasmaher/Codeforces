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
		string s; cin >> s; sort(s.begin(),s.end());
		string x = "Timru";
		if(x==s)
		{
			cout << "YES\n";
		}
		else cout << "NO\n";
	}	
}	
