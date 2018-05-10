//  http://codeforces.com/problemset/problem/160/A   //
#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	int n,counter=0,sum=0,sum2=0;
	int arr[1000]={0};
	cin>>n;
	for(int i=0;i<n;i++)  //compexty= O(n) .... linear order
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n);
	reverse(arr,arr+n);
	
	
	for(int i=0;i<n;i++)  
	{
		sum2+=arr[i];
		sum-=arr[i];
		counter ++ ;
		if(sum2>sum)
		{
		//	counter -- ;
			break ;
		}
		
	}
	
	cout<<counter<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
