//		http://codeforces.com/contest/228/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#define endl "\n"
#define ll long long 
using namespace std ;
int main ()
{
  	std::ios::sync_with_stdio(false);
 	
 	ll arr[4]={0},buy=0;
 	for(int i=0;i<4;i++)  cin>>arr[i];
 	
 	
	 for(int i=0;i<4;i++)
 	{
 		if(arr[i]!=-1)
 		{
 			int cnt=count(arr,arr+4,arr[i]);
 			if(cnt==2)      buy+=(cnt-1);
 			else if(cnt==3) buy+=(cnt-1);
 			else if(cnt==4) buy+=(cnt-1);
 			//cout<<"buy = "<<buy<<endl;
 			int del=0,temp=arr[i];
			for(int j=0;j<4;j++)
 			{	
 				if(del==(cnt-1))
				break; 
 				else if(temp==arr[j])
				 { arr[j]=-1; del++; }	
			}
 			//for(int j=0;j<4;j++) cout<<arr[j]<<" "; cout<<endl;
		}
	 	
 		
	}
 	
 	
	cout<<buy<<endl;
	
	
	
	 
	
	
	return 0;
}
