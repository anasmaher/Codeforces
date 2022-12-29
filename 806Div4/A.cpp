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
  		string s; cin >> s;
		for(int i=0 ; i<s.size() ; i++)
		{
			s[i] = ::tolower(s[i]);
		}
		if(s=="yes")
		{
			cout << "YES" << "\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}
