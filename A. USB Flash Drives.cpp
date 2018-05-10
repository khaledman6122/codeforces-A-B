//		http://codeforces.com/problemset/problem/609/A		//
#include <iostream>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);	
	int i=0,n,m,usb=0,arr[100]={0};

	cin>>n;	cin>>m;

	for(i=0;i<n;i++)	
	cin>>arr[i];
	
	sort(arr,arr+n,greater<int>());

	i=0;
	while(m>0)
	{
		m-=arr[i++];
		usb ++;
	}
	
	cout<<usb<<endl;
	
	
	
	
	
	return 0;
}
