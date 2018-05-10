//    http://codeforces.com/contest/63/problem/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <algorithm>

#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n;
	vector <string> group1,group2,group3;
	string captian,name,type,captain;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name>>type;
		
		if(type=="rat")
		group1.push_back(name);
		
		else if(type=="woman"||type=="child")
		group2.push_back(name);
		
		else if(type=="man")
		group3.push_back(name);
		
		else if(type=="captain")
		captain=name;
	}
	
	while(!group1.empty())
	{cout<<group1[0]<<endl; group1.erase(group1.begin());};
	
	
	while(!group2.empty())
	{cout<<group2[0]<<endl; group2.erase(group2.begin()); };

	while(!group3.empty())
	{cout<<group3[0]<<endl; group3.erase(group3.begin()); };


	cout<<captain<<endl;


 	return 0 ;
}
