//		http://codeforces.com/problemset/problem/151/A		//
#include <iostream>
#include <math.h>
using namespace std ;
int main ()
{
	int n, k, l, c, d, p, nl, np, toast ,lime ,salt;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	toast=(k*l)/nl;
	lime=c*d;
	salt=p/np;
	//cout<<toast<<" "<<lime<<" "<<salt<<endl;
	cout<<min(toast,min(lime,salt))/n;
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
