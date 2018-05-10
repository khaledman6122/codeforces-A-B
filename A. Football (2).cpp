//		http://codeforces.com/problemset/problem/43/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	vector <string> vec;
	string temp,temp2;
	int n,teamone=0,teamtwo=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		vec.push_back(temp);
	}


	temp=vec[0];
	teamone=count(vec.begin(),vec.end(),temp);
	vec.erase(remove(vec.begin(),vec.end(),temp),vec.end());
	teamtwo=n-teamone;
	if(vec.size()!=0)
	{
		temp2=vec[0];
	}
	if(teamone>teamtwo)
	{
		cout<<temp<<endl;
	}
	else
	cout<<temp2<<endl;
	
	
	
	return 0;
}
