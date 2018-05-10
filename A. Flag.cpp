//		http://codeforces.com/contest/16/problem/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,x;
	char start='*',color;
	vector <vector<char> > vvec;
	cin>>n>>m;
	vvec=vector<vector<char> > (n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>color;
			vvec[i].push_back(color);
		}
	}
	
	for(int i=0;i<n;i++)
	{
		x=count(vvec[i].begin(),vvec[i].end(),vvec[i][0]);
		if(x==vvec[i].size())    //if(x==m)
		{
			if(vvec[i][0]!=start) start=vvec[i][0];
			else
			{ cout<<"NO"<<endl;	return 0; }
		}
		else
		{ cout<<"NO"<<endl;	return 0; }
	}
	
 	cout<<"YES"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

