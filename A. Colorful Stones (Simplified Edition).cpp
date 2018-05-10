//		http://codeforces.com/contest/265/problem/A		//
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);
	int i=0;
	string sequ,inst;
	cin>>sequ;	
	cin>>inst;
		
		for(int j=0;j<inst.length();j++)
		{
		if(inst[j]==sequ[i])
		i++ ;    
		}
	
		cout<<i+1<<endl;
	
	
	
	return 0;
}
