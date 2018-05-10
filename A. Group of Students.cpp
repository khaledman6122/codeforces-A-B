//	http://codeforces.com/contest/357/problem/A
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int> vec;
	int k,m,x,y,beg=0,inter=0;
	cin>>m;
	for(int i=0;i<m;i++){int temp; cin>>temp;	vec.push_back(temp);}
	cin>>x>>y;
	for(k=1;k<=m;k++)
	{
		inter=0, beg=0;
		for(int i=0;i<m;i++)
		{
			if((i+1)<k) beg+=vec[i];
			else inter+=vec[i];
		}
		
		if((beg>=x&&beg<=y)&&(inter>=x&&inter<=y) )
		{cout<<k<<endl; return 0;}
	}
	
	cout<<0<<endl;
	
	return 0;
} 


