//    http://codeforces.com/contest/560/problem/A   //
#include <iostream>
#include <string>
#include <sstream>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	
	bool check=false;
	int n,temp;
	cin>>n;
	while(n--)
	{
		cin>>temp;
		if(temp==1)
		check=true;
	}
	if(check==true)
	cout<<-1<<endl;
	else cout<<1<<endl;





 
 	return 0 ;
}
