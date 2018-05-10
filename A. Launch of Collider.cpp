//		http://codeforces.com/contest/699/problem/A		//
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
	 vector <int> x;
	 int n,avg=0,mn_avg=INT_MAX;
	 string direct;
	 cin>>n;	cin>>direct;
	 for(int i=0;i<n;i++) { cin>>avg; x.push_back(avg); }
	 
	 for(int i=0;i<n;i++)
	 {
	 	if(i!=(n-1))
	 	{
	 		if(direct[i]=='R'&&direct[i+1]=='L')	
	 		{
	 			avg=(x[i+1]-x[i])/2;
				 if(avg<mn_avg)  mn_avg=avg;		
			}
	 		
		}
		else
	  {  if(mn_avg!=INT_MAX) { cout<<mn_avg<<endl;	return 0;}  }
	 }
	cout<<-1<<endl;
	
	
    return 0 ;
    
	}
