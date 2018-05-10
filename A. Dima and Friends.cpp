//		http://codeforces.com/contest/272/problem/A		//
#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,f=0,number,ways=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>number; f+=number;}
	n++;
	
	for(int i=1;i<=5;i++)
	if((i+f)%n!=1)	ways++;
	
	cout<<ways<<endl;
	
	
	
	
	
  
	return 0;
}
 
