//	http://codeforces.com/contest/604/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#define ll long long
#define endl "\n"
using namespace std ;
int main ()
{
//	std::ios::sync_with_stdio(false);
	vector <double> m,w;
	double hs,hu,x=500,total=0.0,temp;
	for(int i=0;i<5;i++)
	{ cin>>temp; m.push_back(temp); }
	
	for(int i=0;i<5;i++)
	{ cin>>temp; w.push_back(temp); }
	cin>>hs>>hu;
	
	for(int i=0;i<5;i++)
	{
	total+=max((0.3*x),((1-(m[i]/250))*x)-(50*w[i]));
	x+=500;
	}
	
	total+=hs*100;
	total-=hu*50;
	cout<<total<<endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
} 


