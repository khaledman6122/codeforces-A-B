//		http://codeforces.com/problemset/problem/373/A		//
#include <iostream>
using namespace std ;
bool check(char panel,char a[4][4],int k)
{
	int count =0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(a[i][j]==panel)
			count ++;
		}
	}
	if(count<=k)
	return true ;
	else return false ;

}

int main ()
{
	char arr[4][4],panel;
	int k;
	bool done=true ;
	cin>>k;
	k*=2;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			panel =arr[i][j];
			if(panel!='.')
			{
				if(check(panel,arr,k)==false )
				{
					done =false ;
					break; 
				}
			}
		}
		if(done==false)
		{
			cout<<"NO\n";
			break ;
		}
	}
	if(done!=false)
	cout<<"YES\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
