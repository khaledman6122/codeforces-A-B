//	http://codeforces.com/contest/80/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define endl "\n"
using namespace std ;
bool isprime(int x)
{
	int div=0;
	for(int j=1;j<=x;j++)
	if(x%j==0) div++;
	
	if(div==2) return true;
	else return false;
}
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m;
	bool check=false;
	cin>>n>>m;
	for(int i=n+1;i<m;i++)
	{
		if(isprime(i))
		{check=true; break;}
		
	}	
	if(check==true||!isprime(m))
	cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
		

	return 0;
} 


