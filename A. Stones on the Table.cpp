//   http://codeforces.com/problemset/problem/266/A    //
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	string stones ;
	int num=0,del =0 ;
	cin>>num;
	cin>>stones;
	for(int i=0 ;i<stones.length()-1;i++)
	{
		if(stones[i]==stones[i+1])
		{
			del ++ ;
		}
	}
	
	cout<<del<<endl; 
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
