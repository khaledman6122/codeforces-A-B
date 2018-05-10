//		http://codeforces.com/problemset/problem/349/A			//
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);
	int n,m25=0,m50=0,m100=0,temp;
	vector<int> person;
	cin>>n;
	for(int i=0;i<n;i++)	{ cin>>temp;		person.push_back(temp); }
	
	for(int i=0;i<n;i++)
	{
		if(person[i]==25)
		m25++;
		else if(person[i]==50&&m25>=1)
		{m25--;	m50++; }
		else if(person[i]==100)
		{
			if(m25>0&&m50>0) { m50--, m25-- , m100++;}  //act greedly like you are microbus driver and your in love with change (l faka)
			else if(m25>=3)	{ m25-=3; m100++;}
			 
			else	{ cout<<"NO"<<endl;  return 0; }
			
		}
		
		
		else
		{ cout<<"NO"<<endl;  return 0; }
		
		
		
	}
	
	cout<<"YES"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
