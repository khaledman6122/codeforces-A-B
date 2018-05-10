//      codeforces.com/problemset/problem/136/A     //
#include <iostream>
using namespace std ;
int main ()
{
	int n,arr[100]={0};
	cin>>n;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
 		
	for(int j=1;j<=n;j++)
	{
		for(int i=0;i<n;i++)
		{
			if(j==arr[i])
			cout<<1+i<<" ";
		}
	}
	 		
	
	return 0 ;
}
