//      http://codeforces.com/problemset/problem/110/A       //
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	int c=0;
	string num;
	cin>>num;
	for(int i=0;i<num.length();i++)
	{
		if(num[i]=='4'||num[i]=='7')
		c++ ;
	}
	
	if(c==4||c==7||c==44||c==47||c==74||c==77)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
	
	
	
	
	return 0 ;
}
