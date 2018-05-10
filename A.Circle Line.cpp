//		http://codeforces.com/contest/278/problem/A		//
#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int arr[100],n,s1,s2,way1=0,way2=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	cin>>s1>>s2;	
	s1--,s2--;
	
	for(int i=min(s1,s2);i<max(s1,s2);i++)
	way1+=arr[i];
	
	
	for(int i=max(s1,s2);i<n;i++)
	{
		
		if(i==min(s1,s2))	break;
		
		else way2+=arr[i];
		
		if(i==(n-1))  i=-1;		
	}

	cout<<min(way1,way2)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
