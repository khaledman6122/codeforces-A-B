//		http://codeforces.com/problemset/problem/758/A 		//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	vector <int> vec;
	int temp,n,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{ cin>>temp; vec.push_back(temp); 	}
	
	temp=*max_element(vec.begin(),vec.end());
	for(int i=0;i<n;i++)
	{
		count+=temp-vec[i];
	}
	
	
	cout<<count<<endl;
	
	
	
	
	return 0;
}
