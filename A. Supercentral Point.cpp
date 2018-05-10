//		http://codeforces.com/problemset/problem/165/A		//
#include <iostream>
#include <vector>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector < pair<int,int> > vec;
	int n,x,y,central=0;
	bool right=false,left=false,lower=false,upper=false;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		vec.push_back(make_pair(x,y));
	}
	for(int i=0;i<n;i++)
	{
		x=vec[i].first,y=vec[i].second;
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if(y==vec[j].second&&vec[j].first>x)
				right=true;
				
				if(y==vec[j].second&&vec[j].first<x)
				left=true;
				
				if(x==vec[j].first&&vec[j].second<y)
				lower=true;
				
				if(x==vec[j].first&&vec[j].second>y)
				upper=true;
				
			}
					
		}
		if(right==true&&left==true&&lower==true&&upper==true)
		central ++;
		
	right=false,left=false,lower=false,upper=false;
	
	}
	
	cout<<central<<endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
