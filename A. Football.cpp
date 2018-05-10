//         http://codeforces.com/problemset/problem/96/A      //
#include <iostream>
#include <string>
using namespace std; 
int main ()
{
	int one=0,zero=0;
	string team ;
	cin>>team;
	for(int i=0;i<team.length();i++)
	{
		if(team[i]=='0')
		{
			zero ++ ;
		}
		else
		{
			if(zero<7)
			zero=0;		
			
			else break ;
		}
	
	
		if(team[i]=='1')
		{
			one ++ ;
		}
		else
		{
			if(one<7)
			one=0;	
				
			else break ;
		}
	}
	
	if(one>=7||zero>=7)
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
	
	
	
	
	
	
	
	
	
	 
	
	
	
	return 0 ;
}
