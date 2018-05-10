//    http://codeforces.com/contest/401/problem/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <algorithm>

#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	ll n,x,total=0,card=0,temp;
	cin>>n>>x;
	for(int i=0;i<n;i++) {	cin>>temp; total+=temp;	}
	total=abs(total);
	while(total>0)
	{
		if(total-x>=0)
		{ total-=x,	card++;}
		else x--;
		
	}

	cout<<card<<endl;
	






 	return 0 ;
}
