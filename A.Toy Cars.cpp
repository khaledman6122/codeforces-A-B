//		http://codeforces.com/contest/545/problem/A			//
#include <iostream>
#include <algorithm>
#include <set>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	set <int> Set;
	set <int> ::iterator iter;
	int arr[100][100],n,cars=0;
	cin>>n;
	for(int i=0;i<n;i++) 
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		bool good=true;
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]==1||arr[i][j]==3)
			good=false; 
		}
	  	if(good)
	  	{ cars ++; Set.insert(i+1);}
	  	
	  
	  }  
	
	
	if(!Set.empty())
	{
		cout<<cars<<endl;
		for(iter=Set.begin();iter!=Set.end();iter++)
		cout<<*iter<<" ";
		cout<<endl;
	}
	else
	cout<<0<<endl;
	
	
	
	
	
	
	
	return 0;
}
