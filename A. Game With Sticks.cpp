//		http://codeforces.com/contest/451/problem/A		//
#include <iostream>
#define endl "\n"
using namespace std ;
int main ()
{
	bool akshat=true,malvika=true;
	int counter=1,arr[100][100]={0},n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i][j]=counter;
			counter++;
		}
	}
	
	while(true)
	{
		
		if(akshat==true)
		{
		bool check =false;	
		int del_i=-1,del_j=-1;
   		for(int i=0;i<n;i++)
	   {
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]!=0)
			{
			  del_i=i; 	del_j=j;	
			  check=true; 
			  break;	
			}	
		}
		if(check==true) break;
	}
	if(del_i!=-1)
	{
		for(int i=0;i<m;i++)
		arr[del_i][i]=0;
		del_i=-1;
	}
	
	if(del_j!=-1)
	{
		for(int j=0;j<n;j++)
		arr[j][del_j]=0;
		del_j=-1;
	}
	
	if(check==false)
	{
		cout<<"Malvika"<<endl; return 0;	
	}		
	}
	
	///////////////////////////////////////////////////////////
		if(malvika==true)
		{
			 if(akshat==true)
		{
		bool check =false;	
		int del_i=-1,del_j=-1;
   		for(int i=0;i<n;i++)
	   {
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]!=0)
			{
			  del_i=i; 	del_j=j;	
			  check=true; 
			  break;	
			}	
		}
		if(check==true) break;
	}
	if(del_i!=-1)
	{
		for(int i=0;i<m;i++)
		arr[del_i][i]=0;
		del_i=-1;
	}
	
	if(del_j!=-1)
	{
		for(int j=0;j<n;j++)
		arr[j][del_j]=0;
		del_j=-1;
	}
	
	if(check==false)
	{
		cout<<"Akshat"<<endl; return 0;	
	}		
	}
			 
			 
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
