#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ;
int main ()
{
	string word ;
	cin >>word ;
	for(int i=0;i<word.length();i++)
	{
		if(word[i]=='W'&&word[i+1]=='U'&&word[i+2]=='B')
		{
			word[i]='*';
			word[i+1]='*';
			word[i+2]='*';
		}
	
	}
	
	for(int i=0;i<word.length();i++)
	{
		
		if(word[i]=='*')	
		i+=2;
		
		else
		{
			string temp;
			for(int k=i;k<word.length();k++)
			{
				if(word[k]!='*')
				temp+=word[k];  				
				else
				{
					cout<<temp<<" ";
					i=k-1;
					temp.clear();
					break;
				}
				
				if(temp.empty()==false&&k==word.length()-1)
				{
				cout<<temp<<endl; 
				temp.clear();
				i=word.length()-1;
				}
				
			}
					
		}
	}
	
	
	

	return 0 ;
}
