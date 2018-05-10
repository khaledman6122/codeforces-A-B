//      http://codeforces.com/problemset/problem/255/A       //
#include <iostream>
using namespace std ;
int main ()
{
	int arr[30]={0},n,chest=0,biceps=0,back=0;
	cin>>n;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	for(int i=0;i<n;i+=3)
	{
		chest+=arr[i];
		biceps+=arr[i+1];
		back+=arr[i+2];
	}
	
	if(chest>biceps&&chest>back)	
	cout<<"chest"<<endl;
	else if(biceps>chest&&biceps>back)
	cout<<"biceps"<<endl;
	else if(back>chest&&back>biceps)
	cout<<"back"<<endl;	
		
	return 0 ;
}
