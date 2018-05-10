//		http://codeforces.com/problemset/problem/131/A
#include <iostream>
#include <string>
using namespace std ;
int main()
{
	int upper=0,lower=0;
	string word ;
	cin>>word;
		
	for(int i=1;i<word.length();i++)
	{
		if(word[i]==tolower(word[i])) 
		lower ++;
		else if(word[i]==toupper(word[i]))
		upper ++;
	}
	if(word[0]==tolower(word[0])&&lower==0&&upper==0) 
	{
		cout<<(char)toupper(word[0])<<endl;
	}
	else if(word[0]==toupper(word[0])&&lower==0&&upper==0) 
	{
		cout<<(char)tolower(word[0])<<endl;
	}
	else if(word[0]==toupper(word[0])&&lower+1==word.length())
	cout<<word<<endl;
	
	else if(word[0]==tolower(word[0])&&upper+1==word.length())
	{
		word[0]=toupper(word[0]);
		for(int i=1;i<word.length();i++) 
		word[i]=tolower(word[i]);
		cout<<word<<endl;
	
	}
	
	
	else if(word[0]==toupper(word[0])&&upper+1==word.length())
		{
		word[0]=tolower(word[0]);
		for(int i=1;i<word.length();i++) 
		word[i]=tolower(word[i]);
		cout<<word<<endl;
		}
	
	
	else cout<<word<<endl;

	
	
	  
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
