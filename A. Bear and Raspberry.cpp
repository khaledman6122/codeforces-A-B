// http://codeforces.com/problemset/problem/385/A  //
#include <iostream>
using namespace std ;
int main ()
{
	int arr[105]={},n,c,pro=0,mx=0;
	cin>>n>>c;
	for(int i=0;i<n;i++) cin>>arr[i];
	
	if(n==2)
	 {
	 	if(arr[0]-arr[1]-c>0)
	 	mx=arr[0]-arr[1]-c;
	 }
	 else
	for(int i=0;i<n-1;i++)
	{
	   
	    if((arr[i]-arr[i+1]-c)>0)
		{
		if((arr[i]-arr[i+1]-c)>mx) mx=(arr[i]-arr[i+1]-c);
	    
	    }
	
	}
		
	 
	cout<<mx<<endl;
	
	
	
	
	return 0 ;
}
