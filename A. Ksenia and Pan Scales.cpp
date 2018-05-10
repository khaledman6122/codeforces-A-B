//    http://codeforces.com/contest/382/problem/A	//
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	 
	 
	 
	string l,r,weight,extra;
	int left,right,i=0;
	bool imp=false,ld,rd;
	cin>>weight;	cin>>extra;
	vector <char> vec;
	
	for(i=0;i<extra.length();i++)	 vec.push_back(extra[i]);

	
	for(i=0;true;i++)	 
	{
	if(weight[i]=='|') {i++;break;}
	l+=weight[i];
	} 
	for(i;i<weight.length();i++)	 
	r+=weight[i];	
	
	
	if((l.length()+r.length()+extra.length())%2!=0)
	{ cout<<"Impossible"<<endl; return 0;}
	
	
	i=0;

	if(l.length()<r.length())
	{
		while(!vec.empty()&&r.length()!=l.length())
		{
		l+=vec[0];
		vec.erase(vec.begin());
		}
	}
	
	else if(r.length()<l.length())
	{
		while(!vec.empty()&&r.length()!=l.length())
		{
		r+=vec[0];
		vec.erase(vec.begin());
		}
	}
	
	i=0;
	if(r.length()==l.length()&&!vec.empty())
	{
		while(!vec.empty())
		{
		if(vec.empty()==false) l+=vec[i], vec.erase(vec.begin());
		if(vec.empty()==false) r+=vec[i], vec.erase(vec.begin());
		}	
	}  
	
	
	 if(l.length()!=r.length())
	 cout<<"Impossible"<<endl;
	 
	 else cout<<l<<'|'<<r<<endl;
 
	 
	 
 
 	return 0 ;
}
