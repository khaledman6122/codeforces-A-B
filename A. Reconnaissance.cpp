//    http://codeforces.com/problemset/problem/32/A
#include <iostream>
#include <math.h>
using namespace std ;
#define endl "\n"
#define ll long long
int main ()
{
	std::ios::sync_with_stdio(false);
	ll n,d;
	int arr[10000]={0},way=0;
	cin>>n>>d;
	for(int i=0;i<n;i++) cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j&&abs(max(arr[i],arr[j])-min(arr[i],arr[j]))<=d)
			way++;
		}
	}
	cout<<way<<endl;
	
	
	
	
	return 0 ;
}

