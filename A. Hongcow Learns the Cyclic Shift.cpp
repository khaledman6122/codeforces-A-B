//		http://codeforces.com/problemset/problem/745/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int counter=0;
	string word,temp,temp2;
	cin>>word;
	temp=word;	temp2=word;
	while(true)
	{
		
		temp=temp2[temp2.length()-1];
		temp+=temp2.substr(0,(temp2.length()-1));
		temp2=temp;
		if(temp!=word) counter++;	
		else break ;
	}
	
	cout<<counter+1<<endl;
	
	
	
	
	
	
    return 0 ;
    
	}
