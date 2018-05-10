//	http://codeforces.com/contest/31/problem/A		//
#include <iostream>
using namespace std ;
int main ()
{
	int arr[1000]={0},n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(j!=i&&j!=k&&i!=k)
				{
					if(arr[i]==arr[j]+arr[k])
					{
						cout<<++i<<" "<<++j<<" "<<++k;
						return 0  ;
					}
				}
			}
		}
	}
	
	cout<<-1<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
