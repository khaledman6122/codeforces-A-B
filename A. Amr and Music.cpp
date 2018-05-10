//		http://codeforces.com/problemset/problem/507/A		//
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
	int i=0,n,k,instruments=0;
	instrument_index arr[100]={0};
	vector <int> vec;
	cin>>n;	cin>>k;

	for(i=0;i<n;i++)	
	{
		cin>>arr[i].days;  arr[i].index=i+1;
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i].days>arr[j].days)
			{
				int temp1,temp2;
				temp1=arr[i].days;
				arr[i].days=arr[j].days;
				arr[j].days=temp1;
				///////////////////////////
				temp2=arr[i].index;
				arr[i].index=arr[j].index;
				arr[j].index=temp2;
			}
		}
	}
	
	i=0;
	while(k>0)
	{
		
		if(k>=arr[i].days&&arr[i].days!=0)  
		{
		k-=arr[i].days;
		vec.push_back(arr[i].index);
		instruments ++;
		}
		else break ;	
		i++;
	}
	
	cout<<instruments<<endl;
	if(instruments!=0)
	{	
	sort(vec.begin(),vec.end());
	for(int i=0;i<vec.size()-1;i++)
	cout<<vec[i]<<" ";
	cout<<vec[vec.size()-1]<<endl;
	}
	
	return 0;
}
