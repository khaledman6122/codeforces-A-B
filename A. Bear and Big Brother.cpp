//	http://codeforces.com/problemset/problem/791/A		//
#include <iostream>
using namespace std;
int main()
{
 	int years=0,limak,bob;
 	cin>>limak>>bob;
 	for(years;true;years++)
 	{
 		if(limak>bob) break;
 		else { limak*=3;	bob*=2;  }
	 }
	 
	cout<<years;
	
	
	return 0;
}
