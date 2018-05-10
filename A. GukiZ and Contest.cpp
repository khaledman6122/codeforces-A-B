//    http://codeforces.com/contest/551/problem/A	//
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
	int n,rank=0,arr[10000]={0};
	vector <int> vec;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i]; 
	//sort(arr,arr+n); 
	 
	for(int i=0;i<n;i++) 
	{
	for(int j=0;j<n;j++)
	{
		if(arr[j]>arr[i]&&i!=j) rank++;	
	}	
	vec.push_back(rank+1);
	rank=0;	
	} 
	 
	for(int i=0;i<vec.size();i++)  
	cout<<vec[i]<<" ";
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 	return 0 ;
}
