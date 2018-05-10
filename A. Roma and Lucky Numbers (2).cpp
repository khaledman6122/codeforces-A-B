//   http://codeforces.com/problemset/problem/262/A#    //
#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std ;
bool check(int x,int z)
{
	int c=0;
	stringstream ins;
	string xs;
	ins<<x;
	ins>>xs;
	//cout<<"x = "<<x<<endl;
	//cout<<"xs = "<<xs<<endl;
	for(int j=0;j<xs.length();j++)
	{
		if(xs[j]=='4'||xs[j]=='7')
		{
			c++;
		}
	}
	//cout<<"c = "<<c<<endl;
	if(c<=z)
	{
		//c=0;
		return true;
	}
	else 
	{
		//c=0;
		return false ;
	}
}
int main ()
{
	int n,k,counter=0, arr[100]={0};
	cin>>n>>k;
	for(int i=0 ;i<n;i++)
	{
		cin>>arr[i];
		if(check(arr[i],k))
		counter ++ ;
	}
	cout<<counter<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
