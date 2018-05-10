//		http://codeforces.com/contest/110/problem/A		//
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#define ll long long
#define endl '\n'
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int arr[]={4,7,44,77,444,447,474,777,774,747};
	int size=sizeof(arr)/sizeof(int);
	stringstream inp;
	string temp;
	ll n;
	cin>>n;
	inp<<n;
	inp>>temp;
	int four=count(temp.begin(),temp.end(),'4'); 
	int seven=count(temp.begin(),temp.end(),'7');
	n=four+seven;
	int index=distance(arr,find(arr,arr+size,n));
	if(index!=size)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	
	
	
	
	return 0 ;
}
