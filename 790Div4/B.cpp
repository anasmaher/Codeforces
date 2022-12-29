#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int n;
		cin >> n;
		const int s=n;
		int arr[s];
		int test = INT_MAX;
		for(int i=1 ; i<=s ; i++)
		{
			cin >> arr[i];	
			if(arr[i]<test)
			{
				test = arr[i];
			}
		}
		long long res=0;
		for(int i=1 ; i<=s ; i++)
		{
			res+= arr[i]-test;	
		}
		cout << res <<endl;
	}
}
