//   http://codeforces.com/problemset/problem/353/A  //
#include <iostream>
using namespace std ;
int main ()
{
	
	int n,arr[100][100]={0},upper=0,lower=0,moves=0;
	bool done=false; 
	cin>>n;
	for(int i=0;i<n;i++)
	{
    for(int j=0;j<2;j++) 
	{
	cin>>arr[i][j];
    if(j==0) upper+=arr[i][0];	
    else if(j==1) lower+=arr[i][1];
	}	
	}	
	//cout<<"upper "<<upper<<endl;
	//cout<<"lower "<<lower<<endl;
	if(upper%2==0&&lower%2==0)
	{
		cout<<0<<endl;
		done =true;
	}
	
	else 
	{
		for(int i=0;i<n;i++)
		{
			if((upper-arr[i][0]+arr[i][1])%2==0)
			{
				if((lower-arr[i][1]+arr[i][0])%2==0)
			     {
			     	done =true;
					cout<<1<<endl;
			     	break;
			     	//moves ++ ;
			     	//upper=upper-arr[i][0]+arr[i][1];
			     	//lower=lower-arr[i][1]+arr[i][0];
				 }
			}
		}
	}
	if (done==false)
	cout<<-1<<endl;
	
	
	
	
	
	return 0 ;
}
