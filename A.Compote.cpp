//		http://codeforces.com/contest/746/problem/A		//
#include <iostream>
#define endl "\n"
using namespace std;
int main ()
{
	std::ios::sync_with_stdio(false);
	int a,b,c,tot=0;
	cin>>a;	cin>>b;	cin>>c;
	a/=1; b/=2 , c/=4;
	tot=min(a,min(b,c));
	tot=(tot*1)+(tot*2)+(tot*4);
	cout<<tot<<endl;
	
	

	
	
	return 0;
	
}












/*
#include <iostream>
#define endl "\n"
using namespace std;
int main ()
{
	int a,b,c,tot=0;
	cin>>a;	cin>>b;	cin>>c;
	while(a>=1&&b>=2&&c>=4)
	{
		a--,b-=2,c-=4;
	 tot++,tot+=2,tot+=4;
	}
	
	cout<<tot<<endl;
	
	
	
	return 0;
	
}
*/
