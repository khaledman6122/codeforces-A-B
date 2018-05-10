//		http://codeforces.com/problemset/problem/707/A		//
#include <iostream>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	char arr[100][100];
	bool color=false;
	int n,m;
	cin>>n>>m;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
			if(arr[i][j]=='C'||arr[i][j]=='M'||arr[i][j]=='Y')
			color=true;	
		}
		
	}
	if(color==true)
	cout<<"#Color"<<endl;
	
	else cout<<"#Black&White"<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
