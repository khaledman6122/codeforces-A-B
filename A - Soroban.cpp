//		http://codeforces.com/problemset/problem/363/A		//
#include <iostream>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
 	int arr[10000]={0},x,i=0,c=0;
	cin>>x;
	if(x>9)
	{
		while(x!=0)	
	{
		while(x%10==0)
		{
		x/=10;	arr[i++]=c;		c=0;
		}
		x--;c++;
	}
	if(c!=0)
	arr[i++]=c;
	}
	else	arr[i++]=x;
	
	/*
	for(int j=0;j<i;j++)
	cout<<arr[j]<<" ";
	*/
	
	for(int j=0;j<i;j++)
	{
		if(arr[j]==0)
		cout<<"O-|-OOOO"<<endl;
		
		else if(arr[j]==1)
		cout<<"O-|O-OOO"<<endl;
		
		else if(arr[j]==2)
		cout<<"O-|OO-OO"<<endl;
		
		else if(arr[j]==3)
		cout<<"O-|OOO-O"<<endl;
		
		else if(arr[j]==4)
		cout<<"O-|OOOO-"<<endl;
		
		else if(arr[j]==5)
		cout<<"-O|-OOOO"<<endl;
		
		else if(arr[j]==6)
		cout<<"-O|O-OOO"<<endl;
		
		else if(arr[j]==7)
		cout<<"-O|OO-OO"<<endl;
		
		else if(arr[j]==8)
		cout<<"-O|OOO-O"<<endl;
		
		else if(arr[j]==9)
		cout<<"-O|OOOO-"<<endl;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
