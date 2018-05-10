//		http://codeforces.com/contest/686/problem/A			//
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
	ll x,packs,n,distressed=0;
	char type;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>type>>packs;
		if(type=='+') x+=packs;
		else if(type=='-')
		{
			if(packs<=x) x-=packs;
			else distressed ++;
		}
		
	}
	
	cout<<x<<" "<<distressed<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
