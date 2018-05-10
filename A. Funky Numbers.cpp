//		http://codeforces.com/problemset/problem/192/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
#define endl '\n'
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <ll> vec;
	ll n,x,y;
	cin>>n;		y=n;
	for(ll i=1;true;i++)
	{
		x=(i*(i+1))/2;
		if(x>n) break ;
		else
		vec.push_back(x); 
	}
	
	for(int i=0;i<vec.size();i++)
	{
		x=vec[i];	n-=x;
		//if(find(vec.begin(),vec.end(),n)!=vec.end())  time limite exceeded
		if(binary_search(vec.begin(),vec.end(),n))
		{ cout<<"YES"<<endl; 	return 0; } 
		else if(x*2==y)
		{ cout<<"YES"<<endl; 	return 0; } 
		if(x==vec[vec.size()-1])
		{ cout<<"NO"<<endl; 	return 0; } 
		n=y;
	}
	
	
	
	
	
	
	
	
	return 0 ;
}






/*
//		http://codeforces.com/problemset/problem/192/A		//
#include <iostream>
#define ll long long
#define endl '\n'
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	ll n,x,y;
	cin>>n;
	for(ll i=1;true;i++)
	{
		x=(i*(i+1))/2;
		for(ll j=i+1;true;j++)
		{
			y=(j*(j+1))/2;
			if((x+y)==n||((x*2)==n))
			{ cout<<"YES"<<endl; 	return 0; } 
			else if((x+y)>n)  break;
		}
		if(x>n) 
		{ cout<<"NO"<<endl; return 0; } 
		
	}
	
		
	return 0 ;
}
*/
