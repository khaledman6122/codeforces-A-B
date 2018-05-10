//		http://codeforces.com/contest/567/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std ;
int minimum1(int current,int before)
{
	//distance between anumber and its before
	int y=0;
	if(current<=0&&before<0)           y=abs(abs(current)-abs(before));
	else if(current>0&&before<=0)      y=abs(before)+current;
	else if(current>0&&before>0)      y=current-before;
	return y;
}
int minimum2(int current,int after)
{
	//distance between number and its after
	int x=0;
	
	if(current<=0&&after>=0)  	 x=abs(current) + after;
	else if(current<0&&after<0)  x=abs(abs(current)-abs(after));
	else if(current>0&&after>0)  x=abs( after-current );

	return x;
}



int maximum1(int current,int before)
{
	//distance between anumber and its before , number and its after
	int y=0;
	if(current<0&&before<0)           y=abs(abs(current)-abs(before));
	else if(current>0&&before<=0)      y=abs(before)+current;
	else if(current>0&&before>0)      y=current-before;

	return y;
}



int maximum2(int current,int after)
{
	//distance between anumber and its before , number and its after
	int x=0;
	if(current<0&&after>=0)  	 x=abs(current) + after;
	else if(current<0&&after<0)  x=abs(abs(current)-abs(after));
	else if(current>=0&&after>0)  x=abs( after-current );	
	return x;
}

int main ()
{
	std::ios::sync_with_stdio(false);
 	vector <int> vec;
	long int temp_mx,temp_mn,n;
 	cin>>n;
	 
	 		
  	for(int i=0;i<n;i++)
  	{ cin>>temp_mx; vec.push_back(temp_mx);}
		
  			
	 for(int i=0;i<n;i++) 
	{
  			if(i==0)
  			{
  			temp_mn=minimum2(vec[0],vec[1]);
			temp_mx=maximum2(vec[0],vec[n-1]);
		   }
  			
		else if(i==(n-1))
		{
		temp_mn=minimum1(vec[n-1],vec[n-2]);
		temp_mx=maximum2(vec[0],vec[n-1]);	
		}  
		else
		{
			temp_mn=min(minimum1(vec[i],vec[i-1]),minimum2(vec[i],vec[i+1]));
			temp_mx=max(maximum1(vec[i],vec[0]),maximum2(vec[i],vec[n-1]));		
		}
		  
	  	cout<<temp_mn<<" "<<temp_mx<<endl;		
	  }
 		
 
 
 
 
 
 
 
 	
	return 0;
}
