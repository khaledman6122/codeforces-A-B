//		http://codeforces.com/problemset/problem/394/A      //
#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main()
{
 	
 	std::ios::sync_with_stdio(false);
 	string sticks;
 	int left,right,group1,group2,group3,index,index2;
 	bool addtoright=false;
	 cin>>sticks;
 	index=sticks.find('+');
 	index2=sticks.find('=');
 	if(index!=string::npos&&index2!=string::npos)
 	{ 
	 group1=index ;  
	 group2=index2-index-1;
	 group3=sticks.length()-index2-1 ; 
	}
	/*
 	cout<< group1<<endl;
 	cout<< group2<<endl;
 	cout<< group3<<endl;
	*/
	if((group1+group2)==group3)
	{ cout<<sticks<<endl;	return 0; } 
	
	if((group1+group2)>group3)
	{ left=(group1+group2)-1;  group3++; right=group3; addtoright=true; }
	
	else if((group1+group2)<group3)
	{ left=group1+group2+1;  group3--; right=group3;  addtoright=false; } 
 	
 	if(left==right)
 	{
	 if(addtoright==false)   //addtoleft=true
	 {
	 if(group1>group2)	
	 {
     for(int i=0;i<group1;i++)cout<<'|';
	 cout<<"|+";
	 for(int i=0;i<group2;i++)cout<<'|';
	 }
	 else
	 {
	for(int i=0;i<group1;i++)cout<<'|';
	cout<<"+|";
	for(int i=0;i<group2;i++)cout<<'|';
	 }
	 cout<<"=";
	 for(int i=0;i<group3;i++)cout<<'|';
	 }
	 
	 else if(addtoright==true)
	 {
 	 if(group1>group2)
	 group1--;
	 else group2--;
 	 for(int i=0;i<group1;i++)cout<<'|';  
 	 cout<<"+";
	 for(int i=0;i<group2;i++)cout<<'|'; 
	  	 	 	
 	 cout<<'=';
	 for(int i=0;i<group3;i++)
	 cout<<'|';
	 cout<<endl;	  	
 	}
}
    else cout<<"Impossible"<<endl;
 
 
 
 
 
 return 0;	
}
