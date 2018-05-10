//   http://codeforces.com/contest/486/problem/A   //
// 12:25    1:22    -->57 min //
#include <iostream>
using namespace std ;
int main ()
{
	long long int  x;
	cin>>x;
	if(x%2==0) 
	x/=2;
	else if(x%2!=0)
	{
		x++;
		x/=2;
		x*=(-1);
	}
	
	cout<<x<<endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}


/*
  
n = (n(n+1)/2   =  (n^2+n)/2

1=-1			=-1
2=-1+2			= 1
3=-1+2-3		=-2
4=-1+2-3+4		= 2
5=-1+2-3+4-5	=-3
6=-1+2-3+4-5+6	= 3

*/


/*

n = (n^-1)*n

1 =	-1
2 =	 2
3 =	-3
4 =	 4
5 =	-5
6 =	 6

*/
