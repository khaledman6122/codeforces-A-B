//     http://codeforces.com/problemset/problem/379/A     //
#include <iostream>
using namespace std ;
int main ()
{
	int a,b,c=0,temp=0,counter=0;
	cin>>a>>b;
	
	while(true)
	{
		
		c+=(a-a%b);
		a=(a/b)+(a%b);
		if(a/b==0)
		{
			c+=a;
			break ;
		}
		
	//	cout<<"a= "<<a<<" c = "<<c<<" counter = "<<counter<<" temp = "<<temp<<endl;	
	}

	cout<<c<<endl;
	
	
	
	
	return 0 ;
	
	}
