//      http://codeforces.com/problemset/problem/119/A       //

#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	int a,b,n;
	bool win;
	cin>>a>>b>>n;
	while(true)
	{
		if(n>=__gcd(a,n))
		{
			n-=__gcd(a,n);
			win=true;
		}
		else 
		{
			win=false ;
			break;
		}
	
		if(n>=__gcd(b,n))
		{
			n-=__gcd(b,n);
			win=false;
		}
		else 
		{
			win=true ;
			break;
		}
	
	}
	 
	
	if(win==true) 
	cout<<0<<endl;
	else
	cout<<1<<endl;
	
	
	
	
	
	
	return 0 ;
}

