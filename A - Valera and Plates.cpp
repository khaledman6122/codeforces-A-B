//		http://codeforces.com/contest/369/problem/A	//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,k,wash=0,arr[10000]={0};
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	  
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1&&m>0)
		m--;
		else if(arr[i]==1&&m==0)
		wash++;
		
		if(arr[i]==2&&k>0)
		k--;
		else if(arr[i]==2&&k==0&&m>0)
		m--;
		else if(arr[i]==2&&k==0&&m==0) wash++;
		
	}
	cout<<wash<<endl;
	
	
  
	return 0;
}







/*

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,k,wash=0,type;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		cin>>type;
		if(type==1&&m>0)
		m--;
		else if(type==1&&m==0)
		wash++;
		
		if(type==2&&k>0)
		k--;
		else if(type==2&&k==0&&m>0)
		m--;
		else if(type==2&&k==0&&m==0) wash++;
	}
	cout<<wash<<endl;
	
	
  
	return 0;
}

*/











/*

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,k,wash=0,arr[10000]={0};
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]==1&&m>0)
		m--;
		else if(arr[i]==1&&m==0)
		wash++;
		
		if(arr[i]==2&&k>0)
		k--;
		else if(arr[i]==2&&k==0&&m>0)
		m--;
		else if(arr[i]==2&&k==0&&m==0) wash++;
	}
	cout<<wash<<endl;
	
	
  
	return 0;
}



*/






/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,k,wash=0,type;
	cin>>n>>m>>k;
	while(n--)
	{
		cin>>type;
		if(type==1&&m>0)
		m--;
		else if(type==1&&m==0)
		wash++;
		
		if(type==2&&k>0)
		k--;
		else if(type==2&&k==0&&m>0)
		m--;
		else if(type==2&&k==0&&m==0) wash++;
	}
	cout<<wash<<endl;
	
	
  
	return 0;
}
 
 
*/
