//		http://codeforces.com/contest/157/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#define endl "\n"
using namespace std ;
int main ()
{
  	std::ios::sync_with_stdio(false);
	int squares=0,arr[30][30],row=0,column=0,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{  
		row=0,column=0;
		 for(int k=0;k<n;k++)
		  {  row+=arr[i][k];	 column+=arr[k][j]; }
		     if(column>row)
			 squares++;
		}
		
		
	 }

   cout<<squares<<endl;


	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
