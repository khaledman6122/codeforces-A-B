//    http://codeforces.com/contest/558/problem/A		//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	vector <ll> vec,vec2;
	//vector <ll> ::iterator iter;
	ll n=0,x=0,a=0,max=0, mns=0,pls=0;
	cin>>n; 
	
	
	
	for(int i=0;i<n;i++)
	{
		cin>>x>>a;
		if(x<0)mns++;
		else if(x>0) pls++;
		
		vec.push_back(x);
		vec2.push_back(a);
	}

	
	
	for(ll i=0;i<vec.size()-1;i++)
	{
		for(ll j=i+1;j<vec.size();j++)
		{
			if(vec[i]>vec[j])
			{
				ll temp=vec[i];
				ll temp2=vec2[i];
				  
				vec[i]=vec[j];
				vec2[i]=vec2[j];
				
				vec[j]=temp;
				vec2[j]=temp2;
			}
		}
	}
	//for(int i=0;i<vec.size();i++) cout<<vec[i]<<"*"<<vec2[i]<<" ";  cout<<endl;
	//cout<<pls<<" "<<mns<<endl;
	
	if(pls>0&&mns==0) {cout<<vec2[0];	return 0 ;}
	else if(pls==0&&mns>0) {cout<<vec2[vec2.size()-1]; return 0 ;}
	
	
	else{
	while((pls-mns)>=2)
	{ 
	pls--;	
	/*
	vec.erase(vec.end()-1);
	vec2.erase(vec2.end()-1);
	*/
	/*
	vec.resize(vec.size()-1,0);
	vec2.resize(vec2.size()-1,0);
	*/
	/*
	vec.erase(vec.begin()+vec.size()-1);
	vec2.erase(vec2.begin()+vec2.size()-1);
	*/
	vec.pop_back();
	vec2.pop_back();
	}
	
	while((mns-pls)>=2)
	{
	vec.erase(vec.begin());
	vec2.erase(vec2.begin());
	mns--;
	}
}
	cout<<accumulate(vec2.begin(),vec2.end(),0);
	
	
	
	return 0 ;


}
