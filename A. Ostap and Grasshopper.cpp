//	http://codeforces.com/contest/735/problem/A		//
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#define ll long long
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string  line ;
	int start,end,n,k;
	cin>>n>>k;
	cin>>line;
	start=line.find('G');		end=line.find('T');
	if(start!=string::npos&&end!=string::npos)
	{
		if(start>end)
		{ swap(start,end);	reverse(line.begin(),line.end()); 
			start=line.find('G');		end=line.find('T');}
	}
	
	for(start;start<=end;start+=k)
	{
		if(line[start]=='#') { cout<<"NO"<<endl; 	return 0 ;}
		else if(line[start]=='T') { cout<<"YES"<<endl;	return 0 ;}
	}
	cout<<"NO"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
} 


