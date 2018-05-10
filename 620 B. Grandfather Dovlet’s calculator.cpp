//  http://codeforces.com/contest/620/problem/B  //

#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int arr[10]={6,2,5,5,4,5,6,3,7,6};
int result,position;
void function( int x )
{
		while (x>0) 
	   {
		 	position=x%10;
            result += arr[position];
            x=x/10;
        }
}
int main ()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		 function(i);
	}
  cout<<result<<endl;
return 0 ;
}











/*
#include <iostream>
using namespace std ;
int main ()
{
	int a,b,num=0,result=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		
		num=i;
		if(num==0) result+=6;
		if(num==1) result+=2; 
		if(num==2) result+=5;
		if(num==3) result+=5;
		if(num==4) result+=4;
		if(num==5) result+=5;
		if(num==6) result+=6;
		if(num==7) result+=3;
		if(num==8) result+=7;
		if(num==9) result+=6;
		 
		else
		{
			while(num>10)
			{
				num=num%10;
		if(num==0) result+=6;
		if(num==1) result+=2; 
		if(num==2) result+=5;
		if(num==3) result+=5;
		if(num==4) result+=4;
		if(num==5) result+=5;
		if(num==6) result+=6;
		if(num==7) result+=3;
		if(num==8) result+=7;
		if(num==9) result+=6;
		num=num/10; 
				
				
				
			}
		}
		  
	}
	
	
	
	cout<<result<<endl;
	
	
	
	
	return 0 ;
}
*/





