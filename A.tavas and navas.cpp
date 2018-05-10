//		http://codeforces.com/contest/535/problem/A			//
#include <iostream>
#include <algorithm>
#include <string>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);
	string g1[30]={"zero","one","two","three","four","five","six","seven","eight","nine","empty","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string g2[30]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
	
	bool check=false ,check2=false;
	int n,temp=0,unit=0;
	cin>>n;
	while(n>=0)
	{
		if(n%10==0&&n>=10)
		{check=true; break; }
		else { check2=true ,n--, temp++;}
	}
	
	if(check&&temp==0)	
	cout<<g2[(n/10)-1];
	
	else if(n==10&&temp>0)	
		cout<<g1[n+temp];
	else if(n>10&&temp>0)
	cout<<g2[(n/10)-1]<<"-"<<g1[temp];
	
	else if(n==-1&&temp>0)
	cout<<g1[temp-1];
	return 0;
}
