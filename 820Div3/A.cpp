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
		ll a,b,c; cin >> a >> b >> c;
		
		a--;
		ll res = abs(b-c) + (c-1);

		if(res==a) cout << 3 << '\n';
		else if(res<a) cout << 2 << "\n";
		else cout << 1 << "\n";
	}
}
 
