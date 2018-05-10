//		http://codeforces.com/contest/462/problem/A			//
#include <iostream>
#include <algorithm>
#define endl "\n"
#define ll long long 
using namespace std ;
int main ()
{

	std::ios::sync_with_stdio(false);
 	char arr[100][100];
 	int n,counter=0;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		cin>>arr[i][j];
	 }
 	
	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{
		 counter=0;
		 if(j!=n-1&&arr[i][j+1]=='o') counter++;
		 if(j>0&&arr[i][j-1]=='o') counter++;
		 if(i>0&&arr[i-1][j]=='o') counter++;
		 if(i!=n-1&&arr[i+1][j]=='o') counter++;
		
		if(counter%2!=0)
		 {
		 	cout<<"NO"<<endl;
		 	return  0 ;
		 }
		 }
		 
	 }
 	
	cout<<"YES"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
