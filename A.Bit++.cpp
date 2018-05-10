//		http://codeforces.com/problemset/problem/282/A		  //
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	string arr;
	int x=0,n=0;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>arr;
    for(int i=0;i<arr.length();i++)	
	{
		if(arr[i]=='X'&&arr[i+1]=='+'&&arr[i+2]=='+')
		x++;
		else if(arr[i]=='+'&&arr[i+1]=='+'&&arr[i+2]=='X')
	    x++;

        else if(arr[i]=='X'&&arr[i+1]=='-'&&arr[i+2]=='-')
		x--;
		else if(arr[i]=='-'&&arr[i+1]=='-'&&arr[i+2]=='X')
	    x--;
	}
		
	}
	
	
	
	
	cout<<x<<endl;
	
	
	
	
	
	return 0 ;
}

