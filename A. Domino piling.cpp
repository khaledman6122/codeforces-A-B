//		http://codeforces.com/problemset/problem/50/A		//
#include <iostream>
using namespace std;
int main ()
{
	int n,m,result=0;
	cin>>n>>m;
	result=n*m;
	result=result-(result%2);
	result/=2;
	cout<<result;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
