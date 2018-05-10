//		http://codeforces.com/problemset/problem/146/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <stdlib.h>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int from,to,h1=0,h2=0,n;
	string number,first,second;
	cin>>n;
	cin>>number;
	for(int i=0;i<number.length();i++)
	{
		if(number[i]!='7'&&number[i]!='4')
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	
	from=0 , to=(number.length()/2);
	first=number.substr(from,to);	
	from=(number.length()/2) , to=number.length();
	second=number.substr(from,to);
	
	for(int i=0;i<first.length();i++)
	{
		h1+=first[i]-'0';
	}
	
	for(int i=0;i<second.length();i++)
	{
		h2+=second[i]-'0';
	}
	
	if(h1==h2)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
