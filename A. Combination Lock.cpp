//		http://codeforces.com/contest/540/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,moves=0,solution1=0,solution2=0,num1,num2;
	string line1,line2;
	cin>>n;		cin>>line1;		cin>>line2;
	for(int i=0;i<n;i++)
	{
		num1=line1[i]-'0';	num2=line2[i]-'0';
		solution1=max(num1,num2)-min(num1,num2)-1;
		solution2=9-max(num1,num2)+min(num1,num2);
		moves+=min(solution1,solution2)+1;
	}
	cout<<moves<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
