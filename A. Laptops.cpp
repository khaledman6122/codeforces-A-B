//	http://codeforces.com/contest/456/problem/A		//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
	vector < pair<int,int> > vec;
	int n,price,quality;
	cin>>n;
	for(int i=0;i<n;i++) 
	{	
	cin>>price>>quality;
	vec.push_back(make_pair(price,quality));
	}
	//sort(vec.begin(),vec.end()); 	//sort based on second
	for(int i=0;i<vec.size();i++) 
	{	//cout<<vec[i].first<<" "<<vec[i].second<<endl;
		if(vec[i].first<vec[i].second)
		{
		cout<<"Happy Alex"<<endl;	
		return 0 ;
		}
	}
	
	cout<<"Poor Alex"<<endl;
	
	
	
	
	
	
	
	
	
	
	return  0;
}
