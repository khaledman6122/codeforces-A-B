//		http://codeforces.com/problemset/problem/677/A		//
#include <iostream>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);	
	int n,arr[1000]={0},street_width=0,height_person,height_fence;
	cin>>n>>height_fence;
	for(int i=0;i<n;i++)
	{
		cin>>height_person;
		if(height_person<=height_fence) street_width++;
		else street_width+=2;
	}
	cout<<street_width<<endl;
	
	
	
	
	
	return 0;
}
