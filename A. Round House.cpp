//    http://codeforces.com/contest/659/problem/A
#include <iostream>
using namespace std ;
#define endl "\n"
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,a=0,b=0;
	cin>>n>>a>>b;
	
	if(n==1) {cout<<1<<endl; return 0;}
	if(b==0) {cout<<a<<endl; return 0;}
	if(b>=0)
	{
		while(b!=0)
		{
			if(a==n&&b>0) a=0;
			else{ b--; a++; }
		}
     
	} 
	
	else if(b<0)
	{ 
		b*=-1;
		while(b!=0)
		{
			if(a==1&&b>0) a=1+n;
			else { b--; a--; }
		}
	}
	
	 cout<<a;
	
	
	
	
	
	
	return 0 ;
}
