//		http://codeforces.com/problemset/problem/239/A		//
#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#define ll long long 
using namespace std ;
int main()
{
	bool check =false;
	ll y,k,n,x=1;
	cin>>y>>k>>n;
	x=k;
	for(x;x<=n;x+=k)
	{
		if(x-y>0)	
		{
		cout<<x-y<<" ";
		check =true;	
		}
	}	
	if(check==false)
	cout<<-1<<endl;
	
	
	
	
	
	
	return 0 ;
}
