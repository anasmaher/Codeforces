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
  		int nn; cin >> nn;
  		const int n=nn;
  		string arr[n];
  		
  		map<string,bool>mp;
  		
  		for(int i=0 ; i<n ; i++)
  		{
  			cin >> arr[i];
  			mp[arr[i]] = true;
		}
		
		for(int i=0 ; i<n ; i++)
		{
			int ch=0;
			
			for(int j=1 ; j<arr[i].size() ; j++)
			{
				if(mp[arr[i].substr(0,j)]  && mp[arr[i].substr(j,arr[i].size()-j)])
				{
					ch = 1;
					break;
				}
			}
			cout << ch;
		}
		cout << "\n";
	}
}
