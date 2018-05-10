//		http://codeforces.com/problemset/problem/205/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int>vec ;
	vector <int> ::iterator iter;
	int n,temp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	int min=*min_element(vec.begin(),vec.end());
	if(count(vec.begin(),vec.end(),min)==1)
	{
		iter=find(vec.begin(),vec.end(),min);
		cout<<iter-vec.begin()+1<<endl;
	}
	else
	cout<<"Still Rozdil"<<endl;
	
	
	
	
	
	
	
	return 0;
}
