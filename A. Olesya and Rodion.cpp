//		http://codeforces.com/contest/584/problem/A		//
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int n,t;
	cin>>n>>t;
	if(t>=2&&t<10)
	{
		cout<<t;
		for(int i=0;i<(n-1);i++) cout<<"0";
	}
	else if(n>1&&t==10)
	{
		cout<<'1';
		for(int i=0;i<(n-1);i++) cout<<"0";
	}
	else
	cout<<-1;
	
	
	
	
	
	
	
	return 0;
}
