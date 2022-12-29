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
		int n; cin >> n;
		string s,v; cin >> s;
		
		for(int i=n-1 ; i>=0 ; i--)
		{
			if(s[i]!='0') v.push_back(s[i]-'0'+96);
			else
			{
				v.push_back( (s[i-1]-'0') + ((s[i-2]-'0')*10) +96);
				i-=2;
			}
		}
		reverse(v.begin(),v.end());
		cout << v << "\n";
	}
}
 
