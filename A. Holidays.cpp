//  http://codeforces.com/contest/670/problem/A   //
#include <iostream>
#define ll long long
using namespace std;
int main()
{
	ll n,min=0,max=0;
	cin>>n;
	while(n>=7)
	{
		n-=7,	min+=2;
	}
	if(n>5)  { n-5 , min++ , max=min+1; }    //n==6
	else if(n>=2) max=min+2;			 //n==3.4	
	else if(n==1) max=min+1;
	else max=min;
	
	
	cout<<min<<" "<<max<<endl;
	return 0;
}
