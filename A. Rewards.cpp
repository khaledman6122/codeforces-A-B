//		http://codeforces.com/problemset/problem/448/A		//
#include <iostream>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int a1,a2,a3,b1,b2,b3,rest=0,cups,medals,n,shelves=0;
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	cups=a1+a2+a3;
	medals=b1+b2+b3;
	if(cups<=5&&cups!=0)
	{
		shelves++;
	}
	else
	{
		rest=cups%5;
		shelves=cups/5;
		if(rest>0)
		shelves++;
	}
	
	if(medals<=10&&medals!=0)
	{
		shelves++;
	}
	else
	{
		rest=medals%10;
		shelves+=medals/10;
		if(rest>0)
		shelves++;
	}
	
	
	if(shelves<=n)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	
	
	return 0 ;
}

