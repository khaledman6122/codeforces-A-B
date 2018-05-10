//    http://codeforces.com/contest/334/problem/A		//
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
	int n,num1=0,num2=0;
	cin>>n;
	num1=1 ; 
	num2=n*n;
	

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			cout<<num1<<" "<<num2<<" ";
			num1++,num2--;
		} cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 	return 0 ;
}
