//		http://codeforces.com/contest/365/problem/A		//
#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
int main()
{
	
	stringstream inp;
	string arr[100],num_chr;
	int n,k,total=0;
	cin>>n>>k;
	bool all_k=true;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=k;j++)
		{
			inp<<j;
			inp>>num_chr;
			inp.clear();
			int index =arr[i].find(num_chr);
			num_chr.empty();
			if(index!=string::npos)
			all_k=true;
			else { all_k=false; break ; }
			
			}
		if(all_k==true)
		total++;
	}
	
	cout<<total;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
