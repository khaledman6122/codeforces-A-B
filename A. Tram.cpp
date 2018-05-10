//		http://codeforces.com/problemset/problem/116/A		//
#include <iostream>
using namespace std ;
int main ()
{
	
	int counter=0,stops=0,a,b,max=0;
	cin>>stops;
	for(int i=0;i<stops;i++)
	{
		cin>>a>>b;
		counter+=(-a+b);
		if(counter>max)
		{
			max=counter;
		}
	}
	cout<<max<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}

