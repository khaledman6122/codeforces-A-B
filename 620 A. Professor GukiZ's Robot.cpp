//		http://codeforces.com/problemset/problem/620/A		//
#include <iostream>
#include <math.h>
using namespace std ;
int main ()
{
	
	int x1,y1,x2,y2,final_x=0,final_y=0;
	cin>>x1>>y1;
	cin>>x2>>y2;
     final_x=x2-x1;
     final_y=y2-y1;
	final_x=abs(final_x);
	final_y=abs(final_y);
	
	if(final_x>final_y)
	cout<<final_x<<endl;
	else cout<<final_y<<endl;
	  
	
	
	return 0 ;
}
