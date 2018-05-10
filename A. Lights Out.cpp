//    http://codeforces.com/contest/275/problem/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int arr[3][3]={0},light[3][3];
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
			light[i][j]=1;
		}
	}

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arr[i][j]%2!=0)
			{
			if(light[i][j]==1) light[i][j]=0;
			else light[i][j]=1;
			
			if(j!=2)
			{
			if(light[i][j+1]==1) light[i][j+1]=0;
			else light[i][j+1]=1;
			}
			
			
			if(j!=0)	
			{
			if(light[i][j-1]==1) light[i][j-1]=0;
			else light[i][j-1]=1 ;
			}
			
			if(i!=0)	
			{
				if(light[i-1][j]==1) light[i-1][j]=0;
				else light[i-1][j]=1;
			}
			if(i!=2)	
			{
				if(light[i+1][j]==1) light[i+1][j]=0;
				else light[i+1][j]=0;
			}
			
			}
			
		}
	
	
	}


	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<light[i][j];		
		}cout<<endl;
	}














	
 	return 0 ;
}
