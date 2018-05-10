//		http://codeforces.com/problemset/problem/330/A		//
#include <iostream>
#include <vector>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{	
	int row,column,counter=0,c=0;
	char arr[100][100];
	cin>>row>>column;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{ cin>>arr[i][j]; }
	}
	
	for(int i=0;i<column;i++)
	{
		for(int j=0;j<row;j++)
		{
			if(arr[j][i]!='S')
			counter ++;
			
			else if(arr[j][i]=='S')
			{
				counter=0;
				break;
			}
			if(counter==row)
			{
				for(int k=0;k<row;k++)
				{
				arr[k][i]='*';
				}			
				c+=row;
			}
		}
		counter=0;
	}
	
	
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			if(arr[i][j]!='S')
			counter ++;
			
			if(arr[i][j]=='*')
			counter --;
			
			if(arr[i][j]=='S')
			{
				counter=0;
				break;
			}
			
			
		}
		c+=counter;
		counter=0;
	}
	
	cout<<c<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
