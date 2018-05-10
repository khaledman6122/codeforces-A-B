// 		http://codeforces.com/problemset/problem/499/A		//
#include <iostream>
using namespace std;
int main ()
{
	
	int best,x,current=1,total=0,begin,end;
	cin>>best>>x;
	for(int i=0;i<best;i++)
	{
		cin>>begin>>end;
		
		while(current+x<=begin)
		current+=x;
		
		if(current<begin)
		{
			total+=(begin-current);
			total+=end-(begin-1);
			current=end+1;	
		}
		else if(current==begin)
		{
			total+=end-(begin-1);
			current=end+1;
		
		}
	 	
	}
	
	cout<<total<<endl;

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
