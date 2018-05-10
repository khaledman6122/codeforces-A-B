//		http://codeforces.com/problemset/problem/389/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#define endl "\n"
#define ll long long 
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int> vec ;
	int n,number;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>number;
		vec.push_back(number);
	}
	
	while(count(vec.begin(),vec.end(),vec[0])!=vec.size())
	{
		sort(vec.begin(),vec.end(),greater<int>());
		for(int i=0;i<vec.size()-1;i++)
		{
			if(vec[i]>vec[i+1])
			vec[i]=vec[i]-vec[i+1];
		}
		
	}
	
	cout<<accumulate(vec.begin(),vec.end(),0)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
