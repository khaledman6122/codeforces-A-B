//	http://codeforces.com/contest/415/problem/A		//
#include <iostream>
#include <vector>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <int> vec;
	int button[100],n,m;
	cin>>n>>m;
	for(int j=0;j<m;j++) cin>>button[j];
	
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(button[j]<=i)
			{ vec.push_back(button[j]) ;  break ;  }
		}
	}
	
	for(int i=0;i<vec.size();i++)
	cout<<vec[i]<<" ";
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
