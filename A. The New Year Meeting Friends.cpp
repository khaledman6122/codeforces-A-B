//		http://codeforces.com/contest/723/problem/A	//
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	 int distance=0,arr[3]={0};
	 cin>>arr[0]>>arr[1]>>arr[2];
	 sort(arr,arr+3);
	 distance=max(arr[0],arr[1])-min(arr[0],arr[1]);
	 distance+=max(arr[2],arr[1])-min(arr[2],arr[1]);
	 cout<<distance<<endl;
	return 0;
}
