//		http://codeforces.com/problemset/problem/478/A		//
#include <iostream>
using namespace std;
int main(){
	
	int c1,c2,c3,c4,c5;
	cin>>c1>>c2>>c3>>c4>>c5;
	int total=c1+c2+c3+c4+c5;
	if(total%5==0&&total!=0)
	{
		cout<<total/5<<endl;
	}
	else cout<<-1<<endl;
	
	
	
	
	
	
	return 0 ;
}
