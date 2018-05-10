//		http://codeforces.com/contest/244/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int> vec;
	int n,k,a;
	cin>>n>>k;
	vector <vector <int> > vvec(k);
	
	for(int i=1;i<=(n*k);i++)
	vec.push_back(i);
	
	
	for(int i=0;i<k;i++)
	{	cin>>a;		vvec[i].push_back(a);		vec.erase(find(vec.begin(),vec.end(),a));	}
	
	
	
	
	for(int i=0;i<k;i++)
	{
		for(int j=1;j<n;j++)
		{
			vvec[i].push_back(vec[0]);	vec.erase(vec.begin());
		}
	}
	
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<vvec[i].size();j++)
		{
			cout<<vvec[i][j]<<" ";
		}cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
  
	return 0;
}
 
