//		http://codeforces.com/contest/110/problem/A		//
#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#define endl '\n'
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);

	string name,sbefore,safter;
	int n,before,after;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	cin>>name>>sbefore>>safter;
	before=atoi(sbefore.c_str());
	after=atoi(safter.c_str());
	if(before>=2400&&after>before)
	{ cout<<"YES"<<endl;	return 0 ; }

	} 
	 
		
	cout<<"NO"<<endl;
	
	
	
	
	
	return 0 ;
}
