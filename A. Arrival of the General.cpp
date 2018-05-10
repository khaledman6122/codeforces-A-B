//			http://codeforces.com/problemset/problem/144/A		//
#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int n,mn=INT_MAX,mx=INT_MIN,mn_index=0,mx_index;
	vector <int> vec;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;	
		if(temp>mx)
		{ mx=temp; mx_index=i+1; }
		if(temp<=mn)
		{ mn=temp; mn_index=i+1; }
	}
	
	if(mx_index>mn_index)
	mx_index--;
	
	cout<<(mx_index-1)+(n-mn_index)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
