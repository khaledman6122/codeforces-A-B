//    http://codeforces.com/problemset/problem/37/A     //
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);
	int n,arr[10000]={0},towers[1000]={0};
	vector <int> vec;
	cin>>n;
	for(int i=0;i<n;i++)
	{cin>>arr[i]; vec.push_back(arr[i]);}
	
	
	
	sort(vec.begin(),vec.end());
	vec.erase(unique(vec.begin(),vec.end()),vec.end());

	
	for(int i=0;i<vec.size();i++)
	towers[i]=count(arr,arr+n,vec[i]);
	
	
	int max=*max_element(towers,towers+vec.size());
	cout<<max<<" "<<vec.size()<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}

