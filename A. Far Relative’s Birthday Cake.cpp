//	http://codeforces.com/contest/629/problem/A		//
#include <iostream>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	char arr[1000][1000];
	int x=0,c_c=0,c_r=0,n,happy=0;
	
	cin>>n;
	for(int i=0;i<n;i++) { for(int j=0;j<n;j++) cin>>arr[i][j]; }
	
	for(int i=0;i<n;i++)
	{
		if(x==n) { cout<<happy<<endl; return 0;}
		if(arr[i][x]=='C') c_c ++;
		if(arr[x][i]=='C') c_r ++;
		if(i==(n-1)) 
		{
		 i=-1, x++;
		 c_c=(c_c*(c_c-1))/2 ; 
		 c_r=(c_r*(c_r-1))/2 ;	
		 happy+=c_c + c_r;
		 c_c=0,	c_r=0;
		}
		
	}

	cout<<happy<<endl;
	
	
	
	
	return 0;
}

