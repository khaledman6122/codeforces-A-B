//    http://codeforces.com/contest/294/problem/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	 
	int n,m,to_left=0,to_right=0,x,y,arr[1000]={0};
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	cin>>m;
	
	
	for(int j=0;j<m;j++)
	{
	cin>>x>>y;
	x--;   
	to_left=y-1,	to_right=arr[x]-y  , arr[x]=0;
	if((1+x)!=1) arr[x-1]+=to_left;
	if((1+x)!=n) arr[x+1]+=to_right ;

	}	 
	 for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 
 	return 0 ;
}
