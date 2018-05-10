//		http://codeforces.com/problemset/problem/705/A		//
#include <iostream>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		if(i%2!=0)
		cout<<"I hate ";
		else cout<<"I love ";
		if(i<n)
		cout<<"that ";
	}
	cout<<"it "<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
