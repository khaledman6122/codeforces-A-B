//	http://codeforces.com/problemset/problem/556/A		//
#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;
int main ()
{
	std::ios::sync_with_stdio(false);	
	string word;
	int n,one=0,zero=0;
	cin>>n;		cin>>word;
	for(int i=0;i<word.length();i++)
	{
		if(word[i]=='0') zero++;
	}
	one=n-zero;
	cout<<abs(one-zero)<<endl;


	return 0;
}

//////////////////////////////////////////////////////////////////////////
/*
#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;
int main ()
{
	std::ios::sync_with_stdio(false);	
	string word,temp;
	int n;
	cin>>n;		cin>>word;
	if(n==1) {cout<<1<<endl;	return 0;}
	for(int i=0;i<word.length()-1;i++)
	{
		if(((word[i]=='1'&&word[i+1]=='0')||(word[i]=='0'&&word[i+1]=='1')))
		{
			word[i]='*',word[i+1]='*'; 
		}
		if(i==word.length()-2)
		{
			for(int j=0;j<word.length();j++)
			{
				if(word[j]!='*')
				temp+=word[j];
			}
		
			word.clear(), word=temp,	temp.clear();
			i=-1;
		}
		
		if( (count(word.begin(),word.end(),'0')==word.length()) || (count(word.begin(),word.end(),'1')==word.length()))
		{cout<<word.length()<<endl;	return 0;}
		if(word.empty()) 
		{cout<<0<<endl; return 0;}
	}
	
	
	
	return 0;
}
*/
