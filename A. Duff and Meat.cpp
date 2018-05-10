//		http://codeforces.com/contest/588/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <numeric>
#define endl "\n"
using namespace std ;
int main ()
{
	 std::ios::sync_with_stdio(false);
	 vector <int> a,p;
	 int n,price=0,money=0,I;
	 bool check_i=false;
	 
	 cin>>n;
	 for(int i=0;i<n;i++)
	 {
	 	int temp;
	 	cin>>temp,	a.push_back(temp),
	 	cin>>temp,	p.push_back(temp);
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	 	price=p[i];
	 	money+=price*a[i];
		if(i==n-1) break;
	 	for(int j=i+1;j<n;j++)
	 	{
	 	if(price<p[j])
	 	{ money+=price*a[j], check_i=true ,I=j;  }
		else 
		{
		 I=j-1; break; 
		}
	
		}
	
	 	i=I;
	 	
	 }
	 
	 cout<<money<<endl;
	 
	 
	 
	 
	 
	 
	 
	 
	 
    return 0 ;
    
	}
