#include <iostream>
#include <cmath>
using namespace std ;
int main ()
{
int arr[5][5];
int a,b,moves;
for(int i=0;i<5;i++)
{
for(int j=0;j<5;j++)
{
	cin>>arr[i][j];
	if(arr[i][j]==1)
	a=i,b=j;
}

}	
	moves=abs(a-2)+abs(b-2);
	cout<<moves<<endl;
	
	
	
	
	
	
	
	
	
	return 0 ;
}
