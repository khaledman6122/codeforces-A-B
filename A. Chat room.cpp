//		http://codeforces.com/problemset/problem/58/A		//
#include <iostream>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{
	int five=0,c=0;
	string hello="hello",word;
	cin>>word;
	for(int i=0;i<word.length();i++)
	{
		if(word[i]==hello[five])
		five++;	
	}	
	
	if(five==5)	 
	cout<<"YES"<<endl ;
	
	else cout<<"NO"<<endl  ;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
