//		http://codeforces.com/contest/355/problem/A		//
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long int 
using namespace std ;
int main ()
{
	ll	n,equal_to;	
	cin>>n>>equal_to;	
	if(n>1&&equal_to==0)
	{
		cout<<"No solution\n";	 return 0 ;
	}
	if(n==1&&equal_to==0)
	cout<<0<<"\n";
	
	else
	{
		cout<<equal_to;
		for(ll i =0;i<n-1;i++) 
		cout<<0;
		
		cout<<endl;
	}
	
	
	
	
	
	
	
	return 0 ;
}





/*
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long int 
using namespace std ;
vector <ll> vec;
bool split(ll spl,ll x,ll n)
{
	ll push=0;
	vec.clear();
		while(spl>0)
		{
			
			if(spl%10==0)
			{
			spl/=10;
			}
			else
			 {
			 	spl--;  push++;
				if(spl%10==0)
				{
					vec.push_back(push);			
					push=0;
				}
			}
			//cout<<"spl = "<<spl<<" push = "<<push<<endl;
			if(spl==0)break;	
		}	
	
	
	reverse(vec.begin(),vec.end());
	if(accumulate(vec.begin(),vec.end(),0)==x&&vec.size()==n)
	{
		ll mult=vec.size()-1 , final_result=0;
		for(vector<ll>::iterator i=vec.begin();i!=vec.end();i++)
		{
		final_result+=(*i)*(pow(10,mult));
		mult--;
		}
		cout<<final_result<<endl;
		return true;
	}
	if(n!=vec.size())
	 return false ;

}




int main ()
{
	ll equal_to=0,n,x,num;
	cin>>n>>equal_to;
	if(equal_to==1)
	{
		x=10;
	}
	else if(equal_to%2==0)
	{
		x=equal_to/2;	equal_to/=2;	x+=equal_to*10;
	}
	else if(equal_to%2!=0)
	{
		//5 = 14    3 = 12
		x=10;	equal_to -- ;  	x+=equal_to;
	}
	//cout<<x<<endl;
	
	num=pow(10,n-1);
	//cout<<num<<endl;
	
	while(true)
	{	
		num++;	
		if(split(num,x,n))
		break;
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}


*/
