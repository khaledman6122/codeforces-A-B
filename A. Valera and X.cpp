//     http://codeforces.com/problemset/problem/404/A     //
#include <iostream>
using namespace std ;
int main ()
{
	int n,x=0,o=0;
	cin>>n;
	char arr[300][300];
	
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)		
	{
		cin>>arr[i][j];
	}
	}
	
	//const char dig=arr[0][0];
	for(int i=0;i<n;i++)
	{
	if(arr[0][0]==arr[i][i])
	x++;
	if(arr[0][0]==arr[i][n-i-1])
	x++;
	}
	x-- ;
	
	for(int i=0;i<n;i++)
	{
    for(int j=0;j<n;j++)
    {
    if(arr[0][1]==arr[i][j]&&(arr[0][1]!=arr[i][i]&&arr[0][1]!=arr[i][n-i-1]))
	o++;
    }
	}
	
	//cout<<"x "<<x<<endl;
	//cout<<"o "<<o<<endl;
	if((x+o)==(n*n))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
