//       http://codeforces.com/problemset/problem/339/A     //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	
	string word;
	string new_word;
	getline(cin,word);
	 for(int i=0;i<word.length();i++)
	 {
	 	if(word[i]=='1'||word[i]=='2'||word[i]=='3')
	 	{
	 		new_word+=word[i];
		 }
	 }
	
	sort(new_word.begin(),new_word.end());
	cout<<new_word[0];
	for(int i=1;i<new_word.length();i++)
	{
		cout<<"+"<<new_word[i];
	}
	cout<<endl; 
	
	
	
	
	
	
	return 0 ;
}





/*
// errors with erase and remove functions //
#include <iostream>
#include <string>
#include <algorithm>

using namespace std ;
int main ()
{
	int size;
	string word;
	getline(cin,word);
	cout<<word.size()<<endl;
	for(int j=0;j<word.length();j++)
	{
	word.erase(remove(word.begin(),word.end(),'+'));
    }
	cout<<word.size()<<endl;
	sort(word.begin(),word.end() );
	cout<<word[0];
	for(int i=1;i<word.length();i++)
	{
		cout<<"+"<<word[i];
	}
	
	
	
	
	
	
	
	
	
	return 0 ;
}


*/
