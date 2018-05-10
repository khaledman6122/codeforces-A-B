//   http://codeforces.com/problemset/problem/750/A     //
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int done=0,n,key,time,total=0;
	cin>>n>>time;

	
	for(int i=1;i<=n;i++)
	{
		total+=(5*(i)); 
		if(time+total<=240)
		{ done=i; }
	   else if(time+total>240)
		  break;
	
	
	}
	cout<<done<<endl;
	 
return 0 ;	
}


/*
// not completed yes binary search
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int arr[100]={0},n,key,time;
	cin>>n>>time;
	
	arr[0]=5;
	for(int i=1;i<n;i++)arr[i]=arr[i-1]+(5*(i+1));
	
	
	key=240-time;
	sort(arr,arr+n);
	int lower=0,upper=n-1;
	while(true)			//lower>upper
	{
		int mid=(lower+upper)/2;
		
		if(arr[mid]<key) lower=mid+1;
		else if (arr[mid]>key) upper=mid-1;
		else if(arr[mid]==key||(arr[mid]>key&&arr[mid-1]<key)) 
		{
		if(arr[mid]==key) {cout<<mid+1<<endl; return 0;}
		else if(arr[mid-1]<key&&arr[mid]>key) {cout<<mid<<endl; return 0 ;}
		}
		else if(lower>upper) {break;}
		
	}
		
 

return 0 ;	
}

*/
