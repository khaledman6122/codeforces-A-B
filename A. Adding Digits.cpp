//		http://codeforces.com/contest/260/problem/A		//
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	ll a,b,n;
	cin>>a>>b>>n;

	a*=10;
	for(int i=0;i<=9;i++)
	{
		if((a+i)%b==0)
		{
			cout<<a+i;
			for(int i=0;i<n-1;i++)
			cout<<0;
			return 0;
			}	
	}
	
	 
	
	
	cout<<-1<<endl;
	
	
	
	
	return 0;
}
