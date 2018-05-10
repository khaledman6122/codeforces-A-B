//		http://codeforces.com/problemset/problem/152/A		//
#include <iostream>
using namespace std ;
int main ()
{
	bool check = true ;
	char arr[150][150];
	int student=0,mark=0,best=0;
	cin>>student>>mark;
	for(int i=0;i<student;i++)
	{	
		for(int j=0;j<mark;j++)
		{
		cin>>arr[i][j];
		}
	}
   /*
   for(int i=0;i<student;i++)
	{	
		for(int j=0;j<mark;j++)
		{
		cout<<arr[i][j]<<" ";
		}
	cout<<endl;
	}
*/




	for(int i=0;i<student;i++)
	{	
		for(int j=0;j<mark;j++)
		{
			for(int k=0;k<student;k++)
			{
			if(arr[i][j]<arr[k][j])	{check=false; break;}	
			}
			if(check==false)
			{	
			check = true ;
			}
			else
			{
				check=true ; 	best ++ ;	break ;
			}
		}
		
	}
	
	
	cout<<best<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
