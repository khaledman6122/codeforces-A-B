//		http://codeforces.com/problemset/problem/615/A		//
#include <iostream>
#include <set>
#include <numeric>
using namespace std ;
int main ()
{
	set <int> myset;
	int x,y,z,number;
	cin>>x>>y;
	y=(y*(y+1))/2;
	for(int i=0;i<x;i++)
	{
		cin>>z;
		for(int j=0;j<z;j++)
		{
			cin>>number;
			myset.insert(number);
		}
	}
	
	
	if(y==accumulate(myset.begin(),myset.end(),0))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;	
	
	
	
	
	
	
	
	return 0 ;
}
