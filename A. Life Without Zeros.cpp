// http://codeforces.com/problemset/problem/75/A  //
#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std ;
int main ()
{
	stringstream iss;
	string x,y,a,b,c,cc;
	cin>>x>>y;
    int c1=atoi(x.c_str());
	c1+=atoi(y.c_str());
	iss<<c1;
	iss>>c;
	//cout<<c<<endl;


	for(int i=0;i<x.length();i++)
	{
		if(x[i]!='0')
		a+=x[i];
	}
	int ca=atoi(a.c_str());
	
	
	for(int i=0;i<y.length();i++)
	{
		if(y[i]!='0')
		b+=y[i];
	}
	int cb=atoi(b.c_str());
	
	
	for(int i=0;i<c.length();i++)
	{
		if(c[i]!='0')
		cc+=c[i];
	}
	int ccint=atoi(cc.c_str());
	
	if((ca+cb)==ccint)
	cout<<"YES"<<endl;
	
	else cout<<"NO"<<endl;
	return 0;
}
