//    http://codeforces.com/contest/599/problem/A		//
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
	ll d1,d2,d3,ans[4]={0};
	cin>>d1>>d2>>d3;
	ans[0]=(d1*2)+(d2*2),ans[1]=d1+d2+d3,ans[2]=(d1*2)+(d3*2),ans[3]=(d2*2)+(d3*2);
	sort(ans,ans+4);
	cout<<ans[0];











 	return 0 ;
}
