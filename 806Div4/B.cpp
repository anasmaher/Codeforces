#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
  	int t; cin >> t;
  	
  	while(t--)
  	{
  		int n; cin >> n;
		string s; cin >> s;
		
		int arr[123] = {0};
		int c = 0;
		
		for(int i=0 ; i<n ; i++)
		{
			if(arr[s[i]]==0)
			{
				c+=2;
				arr[s[i]]++;
			}
			else
			{
				arr[s[i]]++;
				c++;
			}
		} 
		cout << c << "\n";	
	}
}
