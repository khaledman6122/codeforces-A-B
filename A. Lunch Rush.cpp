//		http://codeforces.com/problemset/problem/276/A		//
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std ;
int main ()
{
	
	int n,k,f,t,maxjoy=INT_MIN,downjoy=INT_MAX,joy=0;	
	cin>>n>>k;

	for(int i=0;i<n;i++)   
	{
		cin>>f>>t;
		if(t>k)
		{ 
		joy=f-(t-k);
		}
		else
		joy=f;
		
		if(joy>maxjoy)
		maxjoy=joy;
		
	 
	}
 	 cout<<maxjoy<<endl;
	
	
	return 0 ;
}
