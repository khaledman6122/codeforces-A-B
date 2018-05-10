//       http://codeforces.com/problemset/problem/432/A      //
#include <iostream>
using namespace std ;
int main ()
{
	int n,k,counter =0 ;
	int arr[2000];
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	    
	    if(arr[i]+k<=5)
	   counter ++ ; 
	}
 
	cout<<counter/3<<endl;
 	
	
	
	
	
	
	
	
	
	return 0 ;
}
