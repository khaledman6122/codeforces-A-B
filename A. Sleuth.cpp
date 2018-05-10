//		http://codeforces.com/contest/49/problem/A		//
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	string question,vowels="AEIOUY";
	getline(cin,question,'?');
	
	for(int i=question.length()-1;i>=0;i--)
	{
		if(isalpha(question[i]))
		{
			question[i]=toupper(question[i]);
			int index =vowels.find(question[i]);
			if(index!=string::npos)
			{
				cout<<"YES"<<endl;
				return 0;
			}
			else
			{
				cout<<"NO"<<endl;
				return 0;
			}
			
		}
	}
		
		
	return 0;
}
	 
