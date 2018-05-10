//		http://codeforces.com/contest/34/problem/A		//
#include <iostream>
#include <algorithm>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);
	int arr[100]={0},pair=0,n,s1,s2,min=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++)	cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
			if(i!=(n-1)&&abs(arr[i]-arr[i+1])<min)
			{s1=i+1, s2=i+2; min=abs(arr[i]-arr[i+1]);}
	}
	
	if(abs(arr[0]-arr[n-1])<min)
	s1=1, s2=n;
	
	cout<<s1<<" "<<s2<<endl;
	
	
	
	
	
	
	return 0;
}
