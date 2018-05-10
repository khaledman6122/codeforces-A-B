//		http://codeforces.com/problemset/problem/439/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
using namespace std;
int main ()
{ 	
	
	long long int n,d,song=0,jokes=1,total=0;
	cin>>n>>d;
	for(int i=0;i<n-1;i++)
	{
		cin>>song;
		total+=song;
		total+=10;
		jokes+=2;
	}
	cin>>song;
	total+=song;
	//cout<<"total = "<<total<<endl;
	
	if(total>d)
	{ cout<<-1<<endl;  return 0;	}	
	
	else
	{
		int counter=0;
		d-=total;
		while(true)
		{
			d--; counter++;
			if(counter==5)
			 {	jokes++;	 counter=0;	}
			if(d<=0)break;
		}
	cout<<--jokes<<endl;
	}
	
	






	return 0 ;
}
