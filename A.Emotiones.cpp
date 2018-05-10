#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	int n=0,happy=0,sad=0,borred=0;
	char word[1000000];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>word[i];
   
   
	for(int i=0;i<n;i++)
	{
		if(word[i-1]=='('&&word[i]==':')
		happy ++;
		if(word[i]==':'&&word[i+1]==')')
		happy ++;
		if(word[i-1]==')'&&word[i]==':')
		sad ++;
        if(word[i]==':'&&word[i+1]=='(')
        sad ++;
 
	}
 	
      if(happy>sad)
	cout<<"HAPPY"<<endl;
	
    
     if(sad>happy)
	cout<<"SAD"<<endl;
    
     if (happy==sad)
    cout<<"BORED"<<endl;
    
    
    
   	return 0 ;
}
