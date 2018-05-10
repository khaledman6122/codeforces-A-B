//		http://codeforces.com/problemset/problem/376/A		//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
	string arr;
	long long int fulcrum=0,left=0,right=0;
	cin>>arr;
	char fulc='^';
	fulcrum=arr.find(fulc);
	//cout<<fulcrum<<endl;
	
	for(long long int i=fulcrum;i>=0;i--)
	{
		if(isdigit(arr[i]))
		{
			left+=(arr[i]-'0')*(fulcrum-i);
		}	
	}
	for(long long int i=fulcrum;i<arr.length();i++)
	{
		if(isdigit(arr[i]))
		{
			right+=(arr[i]-'0')*(i-fulcrum);
		}
	}
	//cout<<left<<" "<<right<<endl;
	if(right==left)     cout<<"balance"<<endl;
	else if(right>left)	cout<<"right"<<endl;
	else if(left>right)	cout<<"left"<<endl;
	
	
	 
	
	
	return 0 ;
}
