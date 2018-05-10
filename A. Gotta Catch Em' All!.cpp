//		http://codeforces.com/problemset/problem/757/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string	word ;
	vector <ll> vec;
	cin>>word;
	
	ll B=count(word.begin(),word.end(),'B');	
	vec.push_back(B);
	
	ll u=count(word.begin(),word.end(),'u');	
		u/=2;									
		vec.push_back(u);	
	
	ll l=count(word.begin(),word.end(),'l');	
	vec.push_back(l);
	
	ll b=count(word.begin(),word.end(),'b');										
	vec.push_back(b);	
	
	ll a=count(word.begin(),word.end(),'a');
		a/=2;									
		vec.push_back(a);	

	ll s=count(word.begin(),word.end(),'s');	vec.push_back(s);
	
	ll r=count(word.begin(),word.end(),'r');	vec.push_back(r);
	
	
	 if(B>0&&u>0&&l>0&&b>0&&a>0&&s>0&&r>0)
	{
		cout<<*min_element(vec.begin(),vec.end())<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
	
	
	return 0;
}
