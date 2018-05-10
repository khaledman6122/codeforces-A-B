//		http://codeforces.com/problemset/problem/298/A			//
#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
	std::ios::sync_with_stdio(false);
	int n,s,t,r=0,l=0,steps=0,sr=0,tr=0,sl=0,tl=0;
	string arr;
	bool s_road=false, sr_check=false,sl_check=false;
	cin>>n;
	cin>>arr;
	for(int i=0;i<arr.length();i++)
	{
		if(arr[i]=='R'&&sr_check==false) { sr=i+1, sr_check=true; }
		if(arr[i]=='R') r++;
		
		if(arr[i]=='L'&&sl_check==false) { sl=i+1, sl_check=true; }
		if(arr[i]=='L') l++;
		
		if((arr[i]=='R'||arr[i]=='L')&&s_road==false) { s=i+1 , s_road=true;}
		
	}
	tr=sr+r-1;	tl=sl+l-1;
	t=s+l+r-1;
	if(r>0&&l==0) cout<<s<<" "<<s+r; 
	else if(l>0&&r==0) cout<<tl<<" "<<sl-1; 
	else
	{
		
		s=sr;	t=sr+(r+l)-1-l;
	cout<<s<<" "<<t<<endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
