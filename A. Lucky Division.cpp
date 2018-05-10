//   http://codeforces.com/problemset/problem/122/A    //
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std ;
int main ()
{
	   string x;
	  // bool check=true ;
	   int counter = 0 ;
	   cin>>x;
	   for(int i=0;i<x.length();i++)
	   {
	    //if(x[i]!='4'||x[i]!='7')
		//check=true ;	
	   if((x[i]=='4')||(x[i]=='7'))
	   counter ++ ;
	   }
	
	//cout<<"counter : "<<counter<<endl;
	if(counter==x.length())
	cout<<"YES"<<endl;
	else{
		if(atoi(x.c_str())%4==0||atoi(x.c_str())%7==0||atoi(x.c_str())%44==0||atoi(x.c_str())%47==0||atoi(x.c_str())%74==0||atoi(x.c_str())%444==0||atoi(x.c_str())%777==0||atoi(x.c_str())%477==0||atoi(x.c_str())%747==0)
		cout<<"YES"<<endl;
		 
		else  cout<<"NO"<<endl;
	}
	
	
	
	
	
	
	
	return 0 ;
}
