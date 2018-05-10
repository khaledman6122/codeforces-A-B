//    http://codeforces.com/problemset/problem/231/A     //
#include <iostream>
using namespace std ;
int main ()
{
	
	int n,tot=0,solution=0,arr[3];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
			if(arr[i]==1)
			solution++;
		}
		if(solution>1)
		tot++;
		solution=0;
	}
	cout<<tot<<endl;
	
	
	
	
	return 0 ;
}
