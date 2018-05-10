//		http://codeforces.com/contest/732/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#define endl "\n"
using namespace std ;
int check(int number)
{
	int temp=0;
	if(number%10==0)
	temp=0;
	while(number%10!=0)
	{
		number --,	temp++;
		if(number%10==0)
		break;
	}
	if(temp==0)
	return 0;
	else
	return temp;
	
	
}
int main ()
{
  	std::ios::sync_with_stdio(false);
 	int shovel,R;
	cin>>shovel>>R;
 	for(int i=1;true;i++)
 	{
 	if(check(shovel*i)==R)
 	{cout<<i<<endl;	break ;	}
 	else if((shovel*i)%10==0)
 	{cout<<i<<endl;	break ;	}
 	
	}
 

	
	
	
	
	 
	
	
	return 0;
}
