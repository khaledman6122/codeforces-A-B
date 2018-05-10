//		http://codeforces.com/contest/344/problem/A					//
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
	int n,groups=0;
	string magnet;
	char end;
	cin>>n;
	cin>>magnet;
	
	if(n==1)
	{cout<<1<<endl;	return 0 ;}
	
	end=magnet[1];
	for(int i=1;i<n;i++)
	{
		cin>>magnet;
		
		if(magnet[0]!=end)
		end=magnet[1];
		
		else
		{
			groups ++ ;
			end=magnet[1];
		}
		
		if(i==n-1)
		groups ++;
		
	}
	
	cout<<groups<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
