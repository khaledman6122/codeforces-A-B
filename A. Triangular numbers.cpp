//	http://codeforces.com/contest/47/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,t;
	cin>>n;
	for(int i=1;true;i++)
	{
		t=(i*(i+1))/2;
		if(t==n) {cout<<"YES"<<endl;	break;}	
		else if(t>n)  {cout<<"NO"<<endl;	break;}	
	}	
	

	return 0;
} 


