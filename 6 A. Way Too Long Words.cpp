//    http://codeforces.com/problemset/problem/71/A       //
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	string word ;
	int x ;
	cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>word;
		if(word.length()<=10)
		cout<<word<<endl;
		else if(word.length()>10)
		{
		
		cout<<word[0]<<(word.length()-2)<<word[word.length()-1]<<endl;
	    }
		
	}
	
	
	
	
	
	
	
	
	
	return 0 ;
}
