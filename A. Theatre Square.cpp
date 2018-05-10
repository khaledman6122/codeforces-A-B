//		http://codeforces.com/problemset/problem/1/A		//
#include <iostream>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	unsigned long long n,m,a;
	cin>>n>>m>>a;
	 if(n%a!=0)
	 {
	 	n=(n/a)+1;
	 }
	else n=(n/a);

	
	 if(m%a!=0)
	 {
	 	m=(m/a)+1;
	 }
	else m=(m/a);

	
	cout<<(n*m)<<endl;
	
	
	return 0 ;
}

/*
std::ios::sync_with_stdio(false);
	unsigned long long n,m,a;
	cin>>n>>m>>a;
	if(n<a)
	n=a;
	if(m<a)
	m=a;
	while(n%a!=0)
	{
		n++;
	}
	while(m%a!=0)
	{
		m++;
	}

	n/=a;
	m/=a;
	cout<<n*m<<endl;
*/
	
	
