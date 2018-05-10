// http://codeforces.com/problemset/problem/69/A   // 
#include <iostream>
using namespace std ;
int main ()
{
	int n, arr[110][3],arr2[3]={0};
	bool affected=false;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0 ;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	

	for(int i=0;i<3;i++)
	{
		for(int j=0 ;j<n;j++)
		{
			arr2[i]+=arr[j][i];
		}
	}
	
	 
for(int i=0;i<3;i++)
{
	if(arr2[i]!=0)
	{
		affected=true ; 
	break ;
	}
}

if(affected==true)
cout<<"NO"<<endl;
else
cout<<"YES"<<endl;

return 0 ;
}
