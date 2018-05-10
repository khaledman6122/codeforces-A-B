//		http://codeforces.com/contest/580/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	ll start,end,n,local_max=0,global_max=0;
	bool check=false;
	cin>>n;
	cin>>start;
	if(n==1)
	{cout<<1<<endl;	return 0;}
	for(int i=1;i<n;i++)
	{
		cin>>end;
		if(start<=end)
		local_max++; 
		else
		{
		    check=true;	
			local_max++; 
			if(local_max>global_max)
			global_max=local_max;
			
			local_max=0;
		}
		
		start=end;
		if(i==(n-1))
		local_max++;
	}

	
 	cout<<max(global_max,local_max)<<endl;





	
	return 0;
} 
