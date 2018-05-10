//		http://codeforces.com/problemset/problem/257/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define endl "\n"
using namespace std;
int main ()
{
	vector <int> vec;
	int n,m,k,c=0,number;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		cin>>number;	vec.push_back(number);
	}
	sort(vec.begin(),vec.end(),greater<int>());
	
	if(m<=k)
	{
		cout<<0<<endl;	return 0;
	}

	number=0;			//reuse number=supply line filtrs
	while(m>k)
	{
		//cout<<" n = "<<n<<" m = "<<m<<" k = "<<k<<" number = "<<number	<<endl;
		k--;	k+=vec[0];	vec.erase(vec.begin());		number++;
		if(vec.size()==0&&k<m)
		break ;
		
	}
	if(k>=m)
	cout<<number<<endl;
	else
	cout<<-1<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
