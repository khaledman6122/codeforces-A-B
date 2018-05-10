#include <iostream>
#include <math.h>
using namespace std ;
int main ()
{
	
	int lucky[]={4,7,44,47,77,74,444,474,447,744,777,477,747,774};
	int size=sizeof(lucky)/sizeof(int);
	int n ,k,counter=0,yes=0;
	
	cin>>n>>k;
	long int arr[100]={0};
	k=pow(10,k);
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]<k)
		{
			counter ++ ;
			for(int j=0;j<size;j++)
			{
				if(arr[i]==lucky[j])
				{
				yes ++;	
				break ;
				}
			}
		}
	}
	if(yes>0)
	cout<<counter<<endl;
	
	//else cout<<0<<endl;
	
	
	
	
	
	
	return 0 ;
}
