//    http://codeforces.com/problemset/problem/441/A     //
#include <iostream>
#include <algorithm>
using namespace std; 
int main()
{
	long long arr[50]={0},c=0,sellers=0,money=0,antiques=0,prices=0;
	bool check =false;
	cin>>sellers>>money;
	for(int i=0;i<sellers;i++)
	{
		cin>>antiques;
		for(int j=0;j<antiques;j++)
		{
			cin>>prices;
			if(prices<money)
			{
				check=true;				
			}
		}
		
		if(check==true)
		{
			arr[c++]=i+1;
			check=false;
		}
	}
	sort(arr,arr+c);
	
	cout<<c<<endl;
	for(long long i=0;i<c;i++) cout<<arr[i]<<" ";
	cout<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
}
