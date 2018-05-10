//         http://codeforces.com/problemset/problem/230/A        //
#include <iostream>
using namespace std ;
int main ()
{
	int s,n,round=0,arr[1000][2]={0};
	cin>>s>>n;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}
	
		  for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-1;j++)
{
   if(arr[i][0]<arr[j][0])
   {
   swap(arr[i][0],arr[j][0]);
   swap(arr[i][1],arr[j][1]);
   }
   
  }      
	
    }

  
	
	
	for(int i=0;i<n;i++)
	{
		if(s>arr[i][0])
		{
			s+=arr[i][1];
		    round ++ ;
		}
		else 
		break ;
	}
	if(round==n)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	
	
	
	
	
	return 0 ;
}
