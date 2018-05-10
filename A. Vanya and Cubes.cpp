//    http://codeforces.com/contest/492/problem/A	//
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
	ll n,level=0,i=1,total=0;
	cin>>n;
	while(true)
	{
		if(total>=n) break;
		level=(i*(i+1))/2;
		total+=level;
		
		i++;
	}
	if(total>n)
	cout<<i-2<<endl;
	else
	cout<<i-1<<endl;








 	return 0 ;
}
