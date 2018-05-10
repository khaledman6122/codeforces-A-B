//	http://codeforces.com/contest/431/problem/A		//
#include <iostream>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int arr[4]={0},calories=0;
	string strip;
	
	for(int i=0;i<4;i++)
	cin>>arr[i];
	
	cin>>strip;
	for(int i=0;i<strip.length();i++)
	{
		calories+=arr[(strip[i]-'0')-1];
	}
	cout<<calories<<endl;
	
	
	
	return 0;
}
