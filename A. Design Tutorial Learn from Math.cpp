//           http://codeforces.com/problemset/problem/472/A         //
#include <iostream>
using namespace std ;
bool composite(int a,int b)
{
	int ca=0,cb=0;
	for(int j=2;j<b;j++)
	{
	if(b%j==0)
	 cb++ ; 
	if(cb>=1) break ;
	}
	
	
	
	for(int i=2 ;i<a;i++)
	{
		if(a%i==0) 
		ca++ ;  
		if(ca>=1) break ; 
	}
	
	
	
	if(ca>=1&&cb>=1)
	return true ;
	else
	return false ;
}



int main ()
{
	int n,x;
	cin>>n;
	if(n%2==0&&(composite(n/2,n/2)))
	{
		
		cout<<(n/2)<<" "<<(n/2)<<endl;
	}
	else 
	{
		
	for(int i=4;i<=n;i++)
	{
		if(composite(i,n-i))
		{
			cout<<i<<" "<<n-i<<endl;
			break ;
		 } 
	}
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
