//      http://codeforces.com/problemset/problem/118/A               //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{

	string word ;
	cin>>word;
    for(int i=0;i<word.length();i++)
    {
    	word[i]=tolower(word[i]);
	}

	for(int i=0;i<word.length() ;i++)
	for(int j=0;j<word.length()*100 ;j++)
	{
	 		if(word[i]=='a')
		{
	  word.erase(find(word.begin(),word.end(),'a'));
 		
		}
       else if(word[i]=='e')
		{
		word.erase(find(word.begin(),word.end(),'e'));
	
		}
		
	   else  if(word[i]=='i')
		{
		word.erase(find(word.begin(),word.end(),'i'));
	
		}
		
	  else if(word[i]=='o')
		{
		word.erase(find(word.begin(),word.end(),'o'));
	
		}
		
	  else if(word[i]=='u')
		{
		word.erase(find(word.begin(),word.end(),'u'));
	
		}
		
	  else if(word[i]=='y')
		{
		word.erase(find(word.begin(),word.end(),'y'));
	
		}
	
		}
	
      for(int i=0;i<word.length();i++)	
	{
		cout<<'.'<<word[i];
	}
	cout<<endl; 
	return 0 ;
}
