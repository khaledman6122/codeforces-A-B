//     http://codeforces.com/problemset/problem/379/A     //
#include <iostream>
using namespace std ;
int main ()
{
	int a,b,c=0,temp=0,counter=0;
	cin>>a>>b;

	
	while(a!=0)
	{
		a--; c++ ,temp++; 
		if(temp==b)
		{
			a++; temp=0;
		}
	}
	cout<<c<<endl;	
	
	
	
	
	
	
	return 0 ;
}
