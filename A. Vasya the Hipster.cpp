//		http://codeforces.com/contest/581/problem/A   s	//
#include <iostream>
#define endl "\n"
using namespace std;
int main ()
{
	std::ios::sync_with_stdio(false);
	int a,b,mx1=0,mx2=0;
 	cin>>a>>b;
 	mx1=min(a,b);
 	mx2=(max(a,b)-mx1)/2;
 	cout<<mx1<<" "<<mx2<<endl;
	

	
	
	return 0;
	
}



 
