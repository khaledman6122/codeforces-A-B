//		http://codeforces.com/contest/384/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
 	char arr[1000][1000];
 	int n,c;
 	cin>>n;		c=n*n;
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		arr[i][j]='C';
	 }
 
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
		{
		if(arr[i-1][j]=='C'&&arr[i][j]=='C'&&i!=0)
		{arr[i-1][j]='.';		c--;}
		
		if(arr[i+1][j]=='C'&&arr[i][j]=='C'&&i!=(n-1))
		{arr[i+1][j]='.';		c--;}
		
		if(arr[i][j-1]=='C'&&arr[i][j]=='C'&&j!=0)
		{arr[i][j-1]='.';		c--;}
		
		if(arr[i][j+1]=='C'&&arr[i][j]=='C'&&j!=(n-1))
		{arr[i][j+1]='.';		c--;}
		
			
		} 	
    }
 
 	cout<<c<<endl;
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
 			cout<<arr[i][j];
		 }cout<<endl;
    }
 
 
 
 
 
 
 
 
 
 
 
 
 
 	
	return 0;
}
