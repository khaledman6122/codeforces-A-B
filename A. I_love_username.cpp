//		http://codeforces.com/contest/155/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
struct instrument_index
{
	int days;	int index;
};
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);	
	int n,num,i=0,amazing_performance=0;
	vector <int> vec;
	cin>>n;

	for(i=0;i<n;i++)	
	{
	 cin>>num; vec.push_back(num);
	}
	/*
	cin>>i;
	int max=*max_element(vec.begin(),vec.begin()+i);
	cout<<max<<endl;
	*/
	
	for(int i=1;i<n;i++)
	{
		
		int max=*max_element(vec.begin(),vec.begin()+i);
		int min=*min_element(vec.begin(),vec.begin()+i);
		if(vec[i]>max)	amazing_performance++;
		if(vec[i]<min)	amazing_performance++;
	}
	
	cout<<amazing_performance<<endl;
		
	
	
	
	
	 
	 
	return 0;
}
