//     http://codeforces.com/problemset/problem/479/A      //
#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	int a,b,c,A,AA,AAA,B,BB,BBB,C,CC,CCC;
	cin>>a;
	cin>>b;
	cin>>c;
	
	 A=a+b+c ;
	 AA=a*b*c;
	AAA=max(A,AA);
	
	 
	 B=(a*b)+c;
	 BB=(a+b)*c;
	BBB=max(B,BB);
	 
	 C=a*(b+c);
	 CC=a+(b*c);
	 CCC=max(C,CC);
	if(max(AAA,BBB)>CCC)
	cout<<max(AAA,BBB)<<endl;
	else cout<<CCC<<endl;
	
	
	
	return 0 ;
}
