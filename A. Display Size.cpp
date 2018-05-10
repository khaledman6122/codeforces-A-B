//		http://codeforces.com/problemset/problem/747/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,mn=INT_MAX,a,b;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) 
		{
			if(max(i,(n/i))-min(i,(n/i))<mn)
			{ mn=max(i,(n/i))-min(i,(n/i)) , 
			  a=min(i,(n/i)),	b=max(i,(n/i)); }	
		}
	}

	cout<<a<<" "<<b<<endl;







    return 0 ;
    
	}
