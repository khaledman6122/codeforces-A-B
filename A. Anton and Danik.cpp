//		http://codeforces.com/problemset/problem/734/A		//
#include <iostream>
#include <algorithm>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string word;
	int n;
	cin>>n;
	cin>>word;
	int anton=count(word.begin(),word.end(),'A');
	int danik=count(word.begin(),word.end(),'D');
	if(anton>danik)
	cout<<"Anton"<<endl;
	else if(danik>anton)
	cout<<"Danik"<<endl;
	else
	cout<<"Friendship"<<endl;
	
	return 0 ;
}
