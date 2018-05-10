//		http://codeforces.com/contest/742/problem/A
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
using namespace std ;
#define ll unsigned long long
#define  endl "\n"
int main()
{
	std::ios::sync_with_stdio(false);
	int n,arr[]={8,4,2};
	cin>>n;
	if(n==0)
	{cout<<1<<endl;return 0;}
	n%=4;
	 if(n==1) cout<<arr[0]<<endl;
	else if(n==2) cout<<arr[1]<<endl;
	else if(n==3) cout<<arr[2]<<endl;
	else cout<<6<<endl;
	
	
	
	
	
	
	
	return 0;
}
