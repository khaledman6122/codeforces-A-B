//		http://codeforces.com/contest/474/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string line,msg,keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
	char direction;
	cin>>direction;
	cin>>line;
	for(int i=0;i<line.length();i++)
	{
		if(direction=='R')
		{
			int index=keyboard.find(line[i]);
			if(index!=string::npos)
			{
				index--;
				msg+=keyboard[index];
			}
		}
		else if(direction=='L')
		{
			int index=keyboard.find(line[i]);
			if(index!=string::npos)
			{
				index++;
				msg+=keyboard[index];
			}
		}
		
		
	}
 
 
 	cout<<msg<<endl;
  
 
 	
	return 0;
}
