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
		vector<string>v1,v2,v3;
		map<string,int>mp;
		
		int x=0,y=0,z=0;

		for(int i=1 ; i<=3 ; i++)
		{
			for(int j=1 ; j<=n ; j++)
			{
				string s; cin >> s;
				if(i==1) v1.push_back(s); else if(i==2) v2.push_back(s); else v3.push_back(s);
				mp[s]++;
			}
		}

		for(int i=0 ; i<v1.size() ; i++)
		{
			if(mp[v1[i]]==1) x+=3;
			else if(mp[v1[i]]==2) x+=1;
		}
		for(int i=0 ; i<v2.size() ; i++)
		{
			if(mp[v2[i]]==1) y+=3;
			else if(mp[v2[i]]==2) y+=1;
		}
		for(int i=0 ; i<v3.size() ; i++)
		{
			if(mp[v3[i]]==1) z+=3;
			else if(mp[v3[i]]==2) z+=1;
		}

		cout << x << " " << y << " " << z << "\n";
	}
}	
