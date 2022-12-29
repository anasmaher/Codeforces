#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main ()
{
	ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 	
 	int t; cin >> t;
 	
 		while(t--)
 		{
 			int x; cin >> x;
 			vector<int>v;

 			for(int i=1 ; i<=x ; i++)
 			{
 				int val; cin >> val;
 				v.push_back(val);
 			}

 			int res = 0;

 			for(int i=0 ; i<x ; i++)
 			{
 				for(int j=0 ; j<i ; j++)
 				{
 					if(v[i]<=v[j]) res++;
 				}
 			}
 			cout << res << "\n";
 		}
 		
 	
}
