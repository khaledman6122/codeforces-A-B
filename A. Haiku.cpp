//  http://codeforces.com/contest/78/problem/A		//
#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	
	int c1=0,c2=0,c3=0;
	string word1,word2,word3;
	getline(cin,word1);
	getline(cin,word2);
	getline(cin,word3);
	for(int i=0;i<word1.length();i++)
	{
		if(word1[i]=='a'||word1[i]=='e'||word1[i]=='o'||word1[i]=='u'||word1[i]=='i')
		c1++;
	}
	for(int i=0;i<word2.length();i++)
	{
		if(word2[i]=='a'||word2[i]=='e'||word2[i]=='o'||word2[i]=='u'||word2[i]=='i')
		c2++;
	}
	for(int i=0;i<word3.length();i++)
	{
		if(word3[i]=='a'||word3[i]=='e'||word3[i]=='o'||word3[i]=='u'||word3[i]=='i')
		c3++;
	}

	if(c1==5&&c2==7&&c3==5)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;


	return 0;
}
