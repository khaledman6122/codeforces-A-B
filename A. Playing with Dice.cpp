//     http://codeforces.com/problemset/problem/378/A    //
#include <iostream>
#include <math.h>
using namespace std ;
int main ()
{
	
	int a=0,b=0,p1=0,p2=0,draw=0;
	cin>>a>>b;
	for(int i=1;i<=6;i++)
	{
		int x=abs(i-a);
		int y=abs(i-b);
		
		if(x<y)
		p1 ++ ;
		
		else if(y<x)
		p2 ++ ;
		
		else if(x==y)
		draw  ++ ;
	}
	
	cout<<p1<<" "<<draw<<" "<<p2<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
