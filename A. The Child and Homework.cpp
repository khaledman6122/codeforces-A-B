//  http://codeforces.com/problemset/problem/437/A   //
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	string s1,s2,s3,s4,x,X;
	
	cin>>s1;  cin>>s2;   cin>>s3;    cin>>s4;
	long long a,b,c,d,A=0,B=0,C=0,D=0;
	
	
	a=s1.length()-2;  b=s2.length()-2;  c=s3.length()-2;   d=s4.length()-2;
	if((a>=(b*2)&&a>=(c*2)&&a>=(d*2))||(a<=(b/2)&&a<=(c/2)&&a<=(d/2)))
	A++;
    
	if((b>=(a*2)&&b>=(c*2)&&b>=(d*2))||(b<=(a/2)&&b<=(c/2)&&b<=(d/2)))
	B++;
    

	if((c>=(a*2)&&c>=(b*2)&&c>=(d*2))||(c<=(a/2)&&c<=(b/2)&&c<=(d/2)))
	C++;
	
	
	
	
	if((d>=(a*2)&&d>=(b*2)&&d>=(c*2))||(d<=(a/2)&&d<=(b/2)&&d<=(c/2)))
	D++;
	

	
	if(A!=0&&B==0&&C==0&&D==0)
	cout<<"A"<<endl;
	else if(A==0&&B!=0&&C==0&&D==0)
	cout<<"B"<<endl;
	else if(A==0&&B==0&&C!=0&&D==0)
	cout<<"C"<<endl;
	else if(A==0&&B==0&&C==0&&D!=0)
	cout<<"D"<<endl;
	else cout<<"C"<<endl;
	
	
	
	return 0 ;
}
