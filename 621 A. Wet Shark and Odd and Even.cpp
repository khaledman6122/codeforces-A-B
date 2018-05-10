// http://codeforces.com/problemset/problem/621/A    //

#include <iostream>
#include <math.h>
using namespace std ;
int main ()
{
	
	long long   n,sum=0,*arr;       // long long == long long int  //
	cin>>n;
	arr=new long long [n] ;
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];	
	sum+=arr[i];
	}
	if(sum%2==0)
	cout<<(long long) sum <<endl;
	
	else
	{
	long long min=55555555555555;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min&&arr[i]%2==1)
		min=arr[i];
	}
		
		cout<<sum-min<<endl;
		
	}
	 

 
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}








/*
//#include <bits/stdc++.h>
#include <iostream>
#include <climits>        // #include <limits.h> 
using namespace std ;
int main ()
{
	
	long long min=INT_MAX  ,sum=0;
	int n,*arr;       // long long == long long int  //
	cin>>n;
	arr=new int [n];
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];	
	sum+=arr[i];
	if(arr[i]<min&&arr[i]%2!=0)
	min=arr[i];
	}
	if(sum%2==0)
	cout<< sum <<endl;
	
	else 
	cout<<sum-min<<endl;
		  
		
	 
	return 0 ;
}


*/
