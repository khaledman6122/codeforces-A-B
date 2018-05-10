//		http://codeforces.com/contest/454/problem/A		//
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	char arr[101][101];
	int n,counter=1,stars,left,right;
	cin>>n;
	for(int x=0;x<(n/2);x++)
	{
		stars=n-counter;  left=(stars/2)-1;  right=(stars/2)+counter;
		
		for(int i=0;i<=left;i++)
		arr[x][i]='*';
		
		for(int i=left+1;i<right;i++)
		arr[x][i]='D';
	
		for(int i=right;i<n;i++)	
		arr[x][i]='*';
	
		counter+=2;
	}
	
	for(int x=0;x<n/2;x++)
	{
		for(int i=0;i<n;i++)
		cout<<arr[x][i];
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	cout<<'D';
	cout<<endl;
	
	for(int x=(n/2)-1;x>=0;x--)
	{
		for(int i=0;i<n;i++)
		cout<<arr[x][i];
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


	
	return 0;
}
