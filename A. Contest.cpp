//		http://codeforces.com/problemset/problem/501/A		//
#include <iostream>
#include <math.h>
#define endl "\n"
using namespace std ;
int main()
{
	int vasya,misha,a,b,c,d;
	cin>>a>>b>>c>>d;
	misha=max(((3*a)/10),(a-((a/250)*c)));
	vasya=max(((3*b)/10),(b-((b/250)*d)));
	if(misha>vasya)
	cout<<"Misha"<<endl;
	else if(vasya>misha)
	cout<<"Vasya"<<endl;
	else
	cout<<"Tie"<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
