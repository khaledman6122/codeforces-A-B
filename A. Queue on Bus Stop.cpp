//		http://codeforces.com/problemset/problem/435/A		//
#include <iostream>
using namespace std ;
int main ()
{
	int arr[10000]={0},n,k,temp,c=0;
	cin>>n>>k;
	temp=k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]<=temp)
		{
			temp-=arr[i];	
		}
		else if(arr[i]>temp)
		{
			c++;
			temp=k;
			temp-=arr[i];
		}
	
	}
	
	cout<<c+1<<endl;
	
	
	return 0 ;
}
