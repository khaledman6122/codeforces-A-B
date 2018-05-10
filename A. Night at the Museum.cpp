//		http://codeforces.com/contest/731/problem/A		//
#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string word;
	char latin[26];
	int pointer1=0,pointer2=0,solution1=0,solution2=0,rotations=0,j=0;
	
	for(int i=(int)'a';i<=(int)'z';i++)
	latin[j++]=(char)i;
	
	cin>>word;
	for(int i=0;i<word.length();i++)
	{
		pointer2=distance(latin,find(latin,latin+26,word[i]));
		solution1=max(pointer1,pointer2)-min(pointer1,pointer2);
		solution2=26-max(pointer1,pointer2)+min(pointer1,pointer2);
		rotations+=min(solution1,solution2);
		pointer1=pointer2;
	}
	cout<<rotations<<endl;
	
	
	
	
	
	
	
	return 0;
}
