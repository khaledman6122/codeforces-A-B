//		http://codeforces.com/problemset/problem/141/A		//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	std::ios::sync_with_stdio(false);
	string host ,guest,pile;
	

	int gc=0,hc=0;
	cin>>guest;
	cin>>host;
	cin>>pile;
	bool arr[pile.length()]={false};
	
	if(guest.length()+host.length()!=pile.length())
	cout<<"NO"<<endl;
	else
	{
		for(int i=0 ;i<guest.length();i++)
		{
			for(int j=0;j<pile.length();j++)
			{
				if(guest[i]==pile[j]&&arr[j]==false)
				{
					arr[j]=true;
					gc++;
					break;
				}
			}
		}
	 
		
	for(int i=0 ;i<host.length();i++)
		{
			for(int j=0;j<pile.length();j++)
			{
				if(host[i]==pile[j]&&arr[j]==false)
				{
					arr[j]=true;
					hc++;
					break;
				}
			}
		}
		if(hc==host.length()&&gc==guest.length())
		cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
		
		
	}
	
	
	
	
	
	 
	
	return 0 ;
}
