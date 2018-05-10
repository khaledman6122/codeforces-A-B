#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,counter=0,num=0,temp=0;
	vector <int> vec ;
	cin>>n>>m;
	if(n>m) swap(n,m);
	for(int i=1;i<=5;i++)
	{
		if(i<5)
		{	
			num=5-i;
			counter ++;	
			for(int j=10;j<=m;j*=10)
			{
				if((num+j)>m) break;
				if((num+i+j)%5==0) counter ++;
			} vec.push_back(counter);
		}
		
		
		else if(i==5)
		{
			for(int j=5;j<=m;j+=5)
			{
				if((i+j)%5==0) counter ++;
			
			} vec.push_back(counter);
		}
		
		counter=0;
	}
		
	for(int i=0;i<vec.size();i++)  cout<<vec[i]<<" "; cout<<endl;
	counter=0;	
	
		
		for(int i=1;i<=m;i++)
	    counter+=vec[(i%5)-1];
		
	
	
	cout<<counter<<endl;
	
	
	
	
	
	return 0;
}



/*
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,m,counter=0,num=0,temp=0;
	vector <int> vec ;
	cin>>n>>m;
	if(n>m) swap(n,m);
	for(int i=1;i<=5;i++)
	{
		if(i<5)
		{	
			num=5-i;
			counter ++;	
			for(int j=5;j<=m;j+=5)
			{
				if((j-num)>m) break;
				if((j-num)%5==0) counter ++;
			} vec.push_back(counter);
		}
		
		
		else if(i==5)
		{
			for(int j=5;j<=m;j+=5)
			{
				if((i+j)%5==0) counter ++;
			
			} vec.push_back(counter);
		}
		
		counter=0;
	}
		
	for(int i=0;i<vec.size();i++)  cout<<vec[i]<<" "; cout<<endl;
	counter=0;	
	
		
		for(int i=1;i<=n;i++)
		if(i%5!=0)
	    counter+=vec[(i%5)-1];
		else counter+=vec[(i%5)];
	
	
	cout<<counter<<endl;
	
	
	
	
	
	return 0;
}









*/
