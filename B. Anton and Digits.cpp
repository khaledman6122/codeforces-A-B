//	http://codeforces.com/problemset/problem/734/B		//
#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
	
	std::ios::sync_with_stdio(false);
	unsigned long long two,three,five,six,atmost=0,sum=0;
	cin>>two>>three>>five>>six;
	if(two!=0&&five!=0&&six!=0)
	{
	atmost=min(two,min(five,six));
	two-=atmost;	five-=atmost;	six-=atmost;
	sum=atmost*256;
	}
	if(three!=0&&two!=0)
	{
	atmost=min(three,two);
	sum+=atmost*32;
	}
	cout<<sum<<endl;
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
