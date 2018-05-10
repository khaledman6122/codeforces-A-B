//		http://codeforces.com/contest/137/problem/A
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#include <set>
#include <vector>
#include <functional>
using namespace std ;
#define ll unsigned long long
#define  endl "\n"
int main()
{
	std::ios::sync_with_stdio(false);
	int temp=0,closet=0;
	string line;  cin>>line;
	char x=line[0];
	//ccccc ccccc
	for(int i=0;i<line.length();i++)
	{
		closet ++;
		for(int j=i+1;j<line.length();j++)
		{
			if(line[i]==line[j]) temp++;
			if(temp==4){i=i+4; temp=0; break;}
			if(line[i]!=line[j]){i=j-1; temp=0; break; }
			if(j==line.length()-1) i=j;
			//if(j==line.length()) {cout<<closet; return 0;}
		}

	}
	
	
	
	
	
	
	
	
	
	cout<<closet;
	
	
	
	
	
	
	
	
	return 0 ;
	
	
}
