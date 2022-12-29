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
  	    int arr[n];
  	    for(int i=0 ; i<n ; i++)
  	    {
  	        cin >> arr[i];
  	    }
  	    
  	    for(int i=0 ; i<n ; i++)
  	    {
  	        int x; cin >> x;
  	        string s; cin >> s;
  	        
  	        for(int j=0 ; j<x ; j++)
  	        {
  	            if(s[j]=='D')
  	            {
  	                arr[i]++;
  	                if(arr[i]>9)
  	                {
  	                    arr[i] = 0;
  	                }
  	                if(arr[i]<0)
  	                {
  	                    arr[i] = 9;
  	                }
  	            }
  	            else if(s[j]=='U')
  	            {
  	                arr[i]--;
  	                if(arr[i]>9)
  	                {
  	                    arr[i] = 0;
  	                }
  	                if(arr[i]<0)
  	                {
  	                    arr[i] = 9;
  	                }
  	            }
  	        }
  	    }
  	    for(int i=0 ; i<n ; i++)
  	    {
  	        cout << arr[i] << " ";
  	    }
  	    cout << "\n";
  	    
  	}
}
