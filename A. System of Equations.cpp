//		http://codeforces.com/contest/214/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,pair=0; 
	cin>>n>>m;
	for(int i=0;i<=max(n,m);i++)
	{
		for(int j=0;j<=max(n,m);j++)
		{
			if(((i*i)+j)==n&&((j*j)+i)==m)
			{pair++;}
		}
	}
	
	cout<<pair<<endl;	
	
	
	
	
	
	
  
	return 0;
}
 
