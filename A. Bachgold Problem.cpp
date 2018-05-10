//		http://codeforces.com/contest/749/problem/A		//
#include <iostream>
#include <vector>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std;
bool isprime(int x)
{
	int counter =0;
	for(int i=2;i<=x;i++)
	{
		if(x%i==0)
		{
			counter ++;
		}
	}
	if(counter==1) return true;
	else return false ;
}
int main ()
{
	std::ios::sync_with_stdio(false);
	
	vector <int> vec ;
	ll number,x=0;
	cin>>number;
	while(number!=0)
	{
		number-- ,	x++;
		if(isprime(x))
		{vec.push_back(x),	x=0	;}
		
	}
	if(x>0)
	{
		number=x ,	x=0;
		for(int i=0;i<vec.size();i++)
		{
			
			number -- , x++;
			if(isprime(vec[i]+x))
			{
				vec[i]+=x;
				x=0;
			}
			if(number==0)
			{
				break ;
			}
		}
	}
	
	cout<<vec.size()<<endl;
		for(int i=0;i<vec.size()-1;i++)
		{
			cout<<vec[i]<<" ";
		}
		
	cout<<vec[vec.size()-1]<<endl;
	
	return 0 ;
}
