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
		int arr[46] = {0,1,2,3,4,5,6,7,8,9,19,29,39,49,59,69,79,89,189,289,389,489,589,689,789,1789,2789,3789,4789,5789,6789,16789,26789,36789,46789,56789,156789,256789,356789,456789,1456789,2456789,3456789,13456789,23456789,123456789};
		int x; cin >> x;
		cout << arr[x] << "\n";
	}
}
