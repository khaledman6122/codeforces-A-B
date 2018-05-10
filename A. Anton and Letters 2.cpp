//		http://codeforces.com/problemset/problem/443/A			//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	string line,result;
	getline(cin,line);
	for(int i=0;i<line.length();i++)
	{
		if(isalpha(line[i]))
		result+=line[i];
	}
	sort(result.begin(),result.end());
	result.erase((unique(result.begin(),result.end())),result.end());
	cout<<result.length()<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
