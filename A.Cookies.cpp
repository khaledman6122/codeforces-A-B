//		http://codeforces.com/contest/129/problem/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int> vec;
	int n,num,sum=0,bag=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{ cin>>num;	vec.push_back(num);	sum+=num; }
	
	for(int i=0;i<vec.size();i++)
	{
		if((sum-vec[i])%2==0)
		{
			bag++;
		}
	}
	if(bag!=0)
	cout<<bag<<endl;
	else
	cout<<0<<endl;
	
	
	
	
	
	
	return 0 ;
}
