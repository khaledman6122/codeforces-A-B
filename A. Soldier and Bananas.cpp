//		http://codeforces.com/contest/546/problem/A		//
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	 ll k,n,w,price;
	 cin>>k>>n>>w;
	 price=k*(w*(w+1))/2;
	 if(price<=n)
	 cout<<0<<endl;
	else
	cout<<price-n<<endl;
	
	
	
	return 0;
}
