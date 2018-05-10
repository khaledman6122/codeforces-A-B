//		http://codeforces.com/problemset/problem/373/A		//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main ()
{
	vector <char>arr;
	char panel;
	int k,counter=0;
	bool done=true ;
	cin>>k;
	k*=2;
	for(int i=0;i<16;i++)
	{
		cin>>panel;
		arr.push_back(panel);
	}
	
	for(int i=0;i<16;i++)
	{
		if(arr[i]!='.')
		{
		counter=count(arr.begin(),arr.end(),arr[i]);
		if(counter>k)
		{
			done =false ;
			break ;
		}
		else done =true ;
		}
		
	}
	
	
	
	if(done==false)
	cout<<"NO\n";
	
	else if(done!=false)
	cout<<"YES\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
