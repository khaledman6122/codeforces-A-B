//		http://codeforces.com/problemset/problem/443/A			//
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std ;
int main ()
{
	set <char> myset ;
	set <char> :: iterator iter ;
	string line;
	getline(cin,line);
	for(int i=0;i<line.length();i++)
	{
		if(isalpha(line[i]))
		myset.insert(line[i]);
	}
	
	
	cout<<myset.size()<<endl;
	/*
	for(iter=myset.begin();iter!=myset.end();iter++)
	cout<<*iter;
	cout<<endl;
	*/
	
	
	
	
	
	
	
	return 0 ;
}
