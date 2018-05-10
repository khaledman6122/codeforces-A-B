//	http://codeforces.com/contest/14/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	char arr[1000][1000];
	vector<char> vec_c,vec_r;
	bool start=false;
	string temp;
	int r,c,rs,re,cs,ce;
	cin>>r>>c;
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) cin>>arr[i][j];
	}

	for(int i=0;i<r;i++) 
	{
		for(int j=0;j<c;j++)
		{
			temp+=arr[i][j];
		 } 
		int x=temp.find('*');
		if(x!=string::npos&&start==false) 
		{ rs=i,start=true; }
		
		if(x!=-1) 
		{ re=i; }
		
		temp.clear(); 
	}
	
	start=false;
	
    for(int j=0;j<c;j++)	
	   {
		for(int i=0;i<r;i++) 
		{
			temp+=arr[i][j];
		 } 
		int x=temp.find('*');
		if(x!=string::npos&&start==false) 
		{ cs=j;start=true; }
		if(x!=-1) 
		{ ce=j; }
		
		temp.clear(); 
	
	}


	for(int i=rs;i<=re;i++) 
	{
		for(int j=cs;j<=ce;j++)
		{
		 cout<<arr[i][j];
		 } cout<<endl; 
		 
	}









	return 0;
} 







/*
// to delete every empty row,coloumn
	std::ios::sync_with_stdio(false);
	char arr[1000][1000];
	vector<char> vec_c,vec_r;
	string temp;
	int r,c;
	cin>>r>>c;
	for(int i=0;i<r;i++) {
		for(int j=0;j<c;j++) cin>>arr[i][j];
	}

	for(int i=0;i<r;i++) 
	{
		for(int j=0;j<c;j++)
		{
			temp+=arr[i][j];
		 } 
		int x=temp.find('*');
		if(x==string::npos) vec_r.push_back(i);	 
		
		temp.clear(); 
	}

    for(int j=0;j<c;j++)	
	   {
		for(int i=0;i<r;i++) 
		{
			temp+=arr[i][j];
		 } 
		int x=temp.find('*');
		if(x==string::npos) vec_c.push_back(j);	 
		
		temp.clear(); 
	}


	for(int i=0;i<r;i++) 
	{
		if(find(vec_r.begin(),vec_r.end(),i)==vec_r.end())
		{
		for(int j=0;j<c;j++)
		{
			if(find(vec_c.begin(),vec_c.end(),j)==vec_c.end())
			cout<<arr[i][j];
		 } cout<<endl; 
		 
		}
	}







*/
