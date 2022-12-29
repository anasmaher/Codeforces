#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--)
	{
		int n , m;
		cin >> n >> m;
		const int row=n , col=m;
		ll arr[row][col];
		
		for(int i=0 ; i<row ; i++) for(int j=0 ; j<col ; j++)
		cin >> arr[i][j];
		
		int test=0;
		for(int i=0 ; i<row ; i++)
		{
			for(int j=0 ; j<col ; j++)
			{
				int res=0;
				int r=i , c=j;
				while(r<row && c<col)
				{
					res += arr[r][c];
					r++;
					c++;
				}
				
				r=i , c=j;
				while(r<row && c>=0)
				{
					res += arr[r][c];
					r++;
					c--;
				}
				
				r=i , c=j;
				while(r>=0 && c<col)
				{
					res += arr[r][c];
					r--;
					c++;
				}
				
				r=i , c=j;
				while(r>=0 && c>=0)
				{
					res += arr[r][c];
					r--;
					c--;
				}
				res-= arr[i][j]*3;
				if(res>test)
				{
					test = res;
				}
			}

		}
		cout << test <<endl;
	}

}
