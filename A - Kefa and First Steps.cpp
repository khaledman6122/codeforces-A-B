#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
	vector <int> vec;
	int local_max=0,global_max=0,n,number=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>number;
		vec.push_back(number);
	}
	
	for(int i=0;i<n;i++)
	{
		if(vec[i]<=vec[i+1])
		local_max++;
		else  
		{
			local_max++;
			if(local_max>global_max)
			global_max=local_max;
			
			local_max=0;
		}
		
	}
	
	cout<<max(global_max,local_max)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
