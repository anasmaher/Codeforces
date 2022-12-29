#include <bits/stdc++.h>
#define ll long long
//#define sort(v) sort(v.begin(),v.end())
#define sortrv(v) sort(v.rbegin(),v.rend())
#define loop(i,x) for(int i=0 ; i<x ; i++)

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

	int t, n ,q; cin >> t;
	while (t--)
	{
		cin >> n >> q;
		vector<int>v(n);
		loop(i, n) cin >> v[i];

		sortrv(v);
		for (int i = 1; i < n; i++) v[i] += v[i - 1];

		ll x;
		while (q--)
		{
			cin >> x;
			int l = 1, r = n, res = -1;
			while (l <= r) {
				int mid = (l + r) / 2;
				if (v[mid - 1] >= x) {
					res = mid;
					r = mid - 1;
				}
				else {
					l = mid + 1;
				}
			}
			cout << res << "\n";
		}
	}
}
