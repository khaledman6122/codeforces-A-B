//    http://codeforces.com/problemset/problem/510/A   //
#include <iostream>
using namespace std ;
int main ()
{
	bool newline=true ;
	char arr[100][100];
	int n ,m ,counter=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			
			if(i%2==0)
			{
				arr[i][j]='#';
			}
			
			else if(i%2!=0)
			{
				arr[i][j]='.';
				if(counter==0&&j==(m-1)&&newline==true)
				{
				arr[i][m-1]='#';
				counter ++;	
				break ;
				}
				else if(counter==1&&j==0)
				{
				arr[i][0]='#';
				counter =0;	
				newline=false;
				}
			}
		}
		newline=true;
	}
	
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		cout<<arr[i][j];
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	return  0 ;
}
