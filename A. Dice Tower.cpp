//    http://codeforces.com/contest/225/problem/A	//
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include <vector>
#include <algorithm>

#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	 
	vector<int> vec;
	vector<int> ::iterator iter;
	int n,x,y,a,b;
	bool check=true;
	cin>>n,cin>>x;
	y=7-x;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		vec.push_back(a),vec.push_back(7-a);
		vec.push_back(b),vec.push_back(7-b);
		for(int j=1;j<=6;j++)
		{
			iter=find(vec.begin(),vec.end(),j);
			if(iter==vec.end())
			{
			if(j==x||j==y)	check=true;	
			else {check=false;	break;}
			}
		}	
		if(check==false){cout<<"NO"<<endl; return 0;	}
	vec.clear();
	}
	
 	cout<<"YES"<<endl;

 
 	return 0 ;
}
