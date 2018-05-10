//		http://codeforces.com/contest/22/problem/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int> vec;
	int n,num;
	cin>>n;

	for(int i=0;i<n;i++)
	{ cin>>num;	vec.push_back(num); }
	sort(vec.begin(),vec.end());
	vec.erase(remove(vec.begin(),vec.end(),vec[0]),vec.end());
	if(!vec.empty())
	cout<<vec[0]<<endl;
	else
	cout<<"NO"<<endl;	
	
	
	
	
	
	
	return 0 ;
}
