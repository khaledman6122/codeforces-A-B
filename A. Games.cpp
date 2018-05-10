//        http://codeforces.com/problemset/problem/268/A          //
#include <iostream>
using namespace std ;
int main ()
{
	int arr[110][2],n,counter=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}


	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
	{
	  if(arr[i][0]==arr[j][1])
	   counter ++ ;
	}
     }
	
	cout<<counter<<endl;
	
	
	return 0 ;
}
