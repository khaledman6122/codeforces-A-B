//    http://codeforces.com/contest/124/problem/A
#include <iostream>
using namespace std ;
#define endl "\n"
int main ()
{
	std::ios::sync_with_stdio(false);
	int n=0,a=0,b=0,c=0,way=0;
	cin>>n>>a>>b;
	
	for(int i=n-1;true;i--)
	{
		if(i>=a&&c<=b&&(i+c+1)<=n)
		{way++; c++;}
		else break;
	}
	
	cout<<way<<endl;
	
	
	
	
	
	return 0 ;
}
