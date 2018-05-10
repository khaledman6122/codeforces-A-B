//		http://codeforces.com/problemset/problem/469/A	  //
#include <iostream>
#include <set>
#include <numeric>
using namespace std ;
int main ()
{
	set <int> myset;
	int level,x,y,total=0,number;
	
	cin >>level;
	total=(level*(level+1))/2;
	
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>number;
		myset.insert(number);	
	}
	
	cin>>y;
	for(int i=0;i<y;i++)
	{
		cin>>number;
		myset.insert(number);	
	}
	
	
	if(total==accumulate(myset.begin(),myset.end(),0))
	cout<<"I become the guy."<<endl;
	else
	cout<<"Oh, my keyboard!"<<endl;	
	
	
	
	
	
	
	
	return 0 ;
}
