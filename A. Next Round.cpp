#include <iostream>
using namespace std ;
int main ()
{
	int arr[150]={0},n,k,c=0;
	cin>>n>>k;
	for(int i=0;i<n;i++) cin>>arr[i];
	int k2=arr[k-1];
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=k2&&arr[i]>0)
		c++;
	}
	
	cout<<c<<endl;
	
	
	
	
	
	
	
	return 0 ;
}
