//		http://codeforces.com/contest/817/problem/A		//
#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int x1,y1,x2,y2,a,b,countx=0,county=0;
	cin>>x1>>y1>>x2>>y2;
	cin>>a>>b;
	
	countx=abs(min(x1,x2)-max(x1,x2));
	county=abs(min(y1,y2)-max(y1,y2));
	

	if(countx%a==0&&county%b==0)
	{
		if((countx/a)%2==0&&(county/b)%2==0)
		{
			cout<<"YES"<<endl;  return 0;
		}
		else if((countx/a)%2!=0&&(county/b)%2!=0)
		{
			cout<<"YES"<<endl;  return 0;
		}
		
	}
	
	
	cout<<"NO"<<endl;
	
	

	return 0;
}


/*

x1=1   x2=11   a=1
check if you can reach with a steps
11-1=10  10%1==0

y1=2   y2=6   b=1
check if you can reach with b steps
6-2=4  4%1==0

then  check the even/odd  for total number of iterations
if x'steps are even ===> y'steps must be even too
((x1-x2)/a)%2==0    ===> ((y1-y2)/b)%2==0  

if x'steps are odd  ===> y'steps must be odd too
((x1-x2)/a)%2!=0    ===> ((y1-y2)/b)%2!=0  



*/














