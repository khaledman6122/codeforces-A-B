//		http://codeforces.com/problemset/problem/476/A		//
#include <iostream>
#define endl "\n"
using namespace std;
int main ()
{	
	int stairs,m,one=0,two=0;
	cin>>stairs>>m;
	if(stairs<m)
	{ cout<<-1<<endl;  return 0 ; }
	
	while(stairs%2!=0)
	{ one++;	stairs--;	}
	two=stairs/2;
	
	while((one+two)%m!=0)
	{ one+=2;	 two--;     }
	
	cout<<one+two<<endl;
	
	
	
	
	
	return 0 ;
}
