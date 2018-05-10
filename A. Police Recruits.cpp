//		http://codeforces.com/contest/427/problem/A		//
#include <iostream>
#include <vector>
#define endl "\n"

using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,temp,police=0,crimes=0;
	vector <int> vec ;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	
	
	for(int i=0;i<n;i++)
	{
		if(vec[i]==-1&&police==0)
		crimes++;
		else if(vec[i]==-1&&police>0)
		police --;
		else if(vec[i]!=-1)
		police+=vec[i];
		
	}
	
	
	cout<<crimes<<endl;
	
	
	
	
	
	
	
	return 0;
}
