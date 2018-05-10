//		codeforces.com/problemset/problem/25/A 			//
#include <iostream>
using namespace std ;
int main()
{
	
	int arr[100]={0},n,evens=0,odds=0,ind=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
		evens ++ ;
		else odds ++;
	}
	if(evens>odds)
	{
		for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<++i<<endl;
			break;
		}
	}
	}
	else
	{
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<++i<<endl;
			break;
		}
	}	
	}
	
	
	
	
	
	return 0 ;
}
