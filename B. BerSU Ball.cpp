//		http://codeforces.com/problemset/problem/489/B	//
#include <iostream>
#include <algorithm>
using namespace std ;
int main (){
	
	std::ios::sync_with_stdio(false);
	int n,m,couple=0,boys[1000]={0},girls[1000]={0};
	cin>>n;
	for(int k=0;k<n;k++){
		cin>>boys[k];
	}
	cin>>m;
	for(int k=0;k<m;k++){
		cin>>girls[k];
	}
	sort(boys,boys+n);
	sort(girls,girls+m);
	
 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
		{
			if(abs(boys[i]-girls[j])<=1&&girls[j]!=-1){
				couple++,girls[j]=-1; break;
			}
		}
	}
 
	
	


	cout<<couple<<endl;
	
	
	
	
	
	
	return 0;
}
