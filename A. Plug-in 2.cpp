//    http://codeforces.com/problemset/problem/81/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string word,temp;
	vector <char> vec;
	cin>>word;
	
	vec.push_back(word[0]);
	for(int i=1;i<word.length();i++)
	{
		if(word[i]==vec.back()) 
		vec.pop_back();
		else vec.push_back(word[i]);		
	}
	
	for(int i=0;i<vec.size();i++)
	cout<<vec[i];

	return 0;	
}





/*

	if(word[i]==word[i+1])   //first letter only
	{word.erase(i,1); change=true;}
	
	if(word[i]==word[i+1])   //both letters
	{word.erase(i,2); change=true;}

*/




/*
#include<iostream>
using namespace std;

int main()
{
	int k=0;
	string s;
	cin>>s;
	char x[1000002];
	for(int i=0;s[i];i++)
	{
		if(i<=0||x[k-1]!=s[i])
			x[k++]=s[i];
		else
			k--;
	}
	x[k]='\0';
	cout<<x;
}

*/



/*
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
	string s;
	int i, j, k;
	
	cin>>s;
	
	i = s.size() - 1;
	while(i > 0){
		if (s[i] == s[i-1]){
			s.erase(i-1, 2);
			i++;
		}
		i--;
	}
		
	
	
	cout<<s;
		
	return 0;
}

*/
