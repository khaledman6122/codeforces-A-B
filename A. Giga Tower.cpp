//			codeforces.com/problemset/problem/488/A			//
#include <iostream>
#include <sstream>
using namespace std ;
#define ll long long
bool lucky(ll x)
{
	int c=0;
	stringstream inp;
	string line;
	inp<<x;
	inp>>line;
	//cout<<line<<"\n";
	for(int i=0;i<line.length();i++)
	if(line[i]=='8')
	{
		c++;
		break;
	}
	if(c>0)
	return true;
	else return false ;
}


int main ()
{
	ll number,counter=1;
	cin>>number;
	number++;
	while(lucky(number)==false)
	{
		counter ++ ;
		number ++  ;
	}
	cout<<counter<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
