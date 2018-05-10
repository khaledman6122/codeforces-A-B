//		http://codeforces.com/problemset/problem/688/A		//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);
	string schedule;
	int arr[100]={0},n,d,c=0,win=0;
	cin>>n>>d;
	
	for(int i=0;i<d;i++)
	{
	  cin>>schedule	;
	  
	  int index=schedule.find('0');
	  if(index!=string::npos)	
	  win++;
	 
	  else
	  {
	  	if(win!=0)
	  	{
	  	arr[c++]=win;  win=0;	
		}
	  }
	//	schedule.clear();
	}	
	
	int temp=*max_element(arr,arr+c);
	cout<<max(temp,win)<<endl;
	
}
