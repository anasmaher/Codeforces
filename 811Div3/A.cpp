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
		int n,h,m; cin >> n >> h >> m;
		int st = 60*h + m;
		int res = INT_MAX;

		while(n--)
		{
			int ah,am; cin >> ah >> am;
			int al = 60*ah + am;

			res = min(res, (al+1440-st)%1440);
		}
		cout << res/60 << " " << res%60 << "\n";

	}
}
