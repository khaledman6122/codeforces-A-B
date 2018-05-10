//		http://codeforces.com/problemset/problem/114/A		//
#include <iostream>
#include <sstream>
//#include <string>
#define ull unsigned long long
#define ll long long
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);	
	ull k,l,i=0,temp;	
	cin>>k>>l;
	temp=k;
	for(k;true;k*=temp)
	{
		
		if(k==l)
		{
			cout<<"YES"<<endl;	cout<<i<<endl;
			return 0;
		}
		if(k>l) break;
	
		i++;
	}
	
	cout<<"NO"<<endl;
		
	return 0;
}
/////////////////////////////////////////////////////////////////////////
//first wrong answer //
/*
//		http://codeforces.com/problemset/problem/114/A		//
#include <iostream>
#include <sstream>
//#include <string>
#define ull unsigned long long
#define ll long long
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);	
	ull k,l;	
	stringstream inp;
	string number;
	cin>>k>>l;
	inp<<l;
	inp>>number;	
	
	for(int i=0;i<number.length();i++)
	{
		
		if(number[i]-'0'>0&&number[i]-'0'<=k)
		{
			cout<<"YES"<<endl;
			cout<<i+1<<endl;
			return 0;
		}
	}
	
	cout<<"NO"<<endl;
	
	
	return 0;
}
*/

