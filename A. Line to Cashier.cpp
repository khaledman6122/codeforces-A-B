//		http://codeforces.com/problemset/problem/408/A			//
#include <iostream>
using namespace std ;
int main ()
{
	
	int t=0,time=INT_MAX,pro,c,arr[100]={0};
	cin>>c;
	for(int i=0;i<c;i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<arr[i];j++)
		{	
			cin>>pro;
			pro*=5;
			t+=pro;
		}
		t+=(arr[i]*15);
		if(t<time)
		time=t;	
		t=0;
		pro=0;
	}
	cout<<time<<endl;
	
	
	 
	
	return 0 ;
}
