//		http://codeforces.com/problemset/problem/496/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
 	vector <int> vec,vheight;
 	int n,x,temp,max=INT_MIN;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{	cin>>x;		vec.push_back(x);	}
	
	for(int i=1;i<n-1;i++)
	{
		x=vec[i];
		vec.erase(vec.begin()+i);
		for(int j=1;j<vec.size();j++)
		{
			temp=vec[j]-vec[j-1];
			if(temp>max)
			{
				max=temp;
			}
		}
		vheight.push_back(max);
		max=INT_MIN;
		vec.insert(vec.begin()+i,x);
	
	}
	
	int min=*min_element(vheight.begin(),vheight.end());
	cout<<min<<endl;
	
	
	
	
	return 0 ;
}
