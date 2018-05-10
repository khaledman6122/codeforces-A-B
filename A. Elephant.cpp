#include <iostream>
#include <string>
#include <math.h>
#define ll long long
using namespace std ;
int main ()
{
 
 	ll number,counter=0;
 	cin>>number;
 	while(number>=5 )
 	{
 		number-=5;
		counter++; 	
	}
 	while(number>=4 )
 	{
 		number-=4;
		counter++; 	
	}
 	while(number>=3 )
 	{
 		number-=3;
		counter++; 	
	}
 	while(number>=2 )
 	{
 		number-=2;
		counter++; 	
	}
 	while(number>=1 )
 	{
 		number--;
		counter++; 	
	}
 
 
 	cout<<counter<<endl;
 
 
 
 
 
  	
	return 0 ;
}
