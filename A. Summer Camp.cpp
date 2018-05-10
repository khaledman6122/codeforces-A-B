//		http://codeforces.com/contest/672/problem/A		//
#include <iostream>
#include <sstream>
using namespace std ;
int main ()
{
	stringstream  inp;
	string temp,line;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		inp<<i;
		inp>>temp;
		line+=temp;
		inp.clear();
	}
	
	cout<<line[n-1]<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
