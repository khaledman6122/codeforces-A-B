//		http://codeforces.com/problemset/problem/44/A		//
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);

	vector <string> vec;
	vector <string> vec2;
	int n,counter=0;
	string temp1,temp2;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp1>>temp2;
		vec.push_back(temp1);
		vec2.push_back(temp2);
	}
	
	for(int i=0;i<vec.size();i++)
	{
		for(int j=i+1;j<vec.size();j++)
		{
			if(vec[i]==vec[j]&&vec2[i]==vec2[j]&&vec[i]!="*"&&vec2[i]!="*")
			{
				vec[j]="*";	vec2[j]="*";
				counter++;
			}
		}
	}
	
	cout<<n-counter<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
