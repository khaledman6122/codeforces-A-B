//		http://codeforces.com/problemset/problem/577/A		//
#include <iostream>
#define	endl "\n"
#define	ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	ll n,k,temp=0,counter=0;
	cin>>n>>k;
	//ll from=1,to=n;
	
	for(int i=1;i<=n;i++)
	{
		if(k%i==0)
		{
			temp=k;
			temp/=i;
			if(temp>=1&&temp<=n)
			{
				//cout<<temp<<endl;
				counter ++;
			}
		}
		
	}
	
	cout<<counter<<endl;
	
	
	
	







	
	return 0 ;
}
