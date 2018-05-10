//     http://codeforces.com/problemset/problem/133/A      //
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	string line;
	int no=0;
	cin>>line;
	for(int i=0;i<line.length();i++)
	{
		if(line[i]=='H'||line[i]=='Q'||line[i]=='9')
	    {
	    	no=0;
			break;
		}
      else no ++;
	}
	
	if(no==0)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0 ;
}
