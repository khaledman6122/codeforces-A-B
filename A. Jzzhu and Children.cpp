//    http://codeforces.com/problemset/problem/450/A
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int> vec;
	int n,m,current=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{int temp; cin>>temp; vec.push_back(temp); }
	
	for(int i=0;i<n;i++)
	{
		if(vec[i]<=m&&vec[i]!=-1)
		{
			current =i+1;
			vec[i]=-1;
		}
		else 
		{
			if(vec[i]!=-1)
			{
			vec[i]-=m;
			current=i+1;
			}
			
		}
		if(i==n-1)
		{
		if(count(vec.begin(),vec.end(),-1)==vec.size())
		break;
		else i=-1;
		}
	}
	
	cout<<current<<endl;
	
	
	
	
	
	
	
	return 0 ;


}
