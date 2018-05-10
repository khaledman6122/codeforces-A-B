//  http://codeforces.com/problemset/problem/236/A      //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ; 
int main ()
{
	
	string name ;
	cin>>name;
	sort(name.begin(),name.end());
	name.erase(unique(name.begin(),name.end()),name.end() );
	if(name.length()%2!=0)
	cout<<"IGNORE HIM!"<<endl;
	else cout<<"CHAT WITH HER!"<<endl;
	
	
	
	
	
	
	
	return 0 ;
}
