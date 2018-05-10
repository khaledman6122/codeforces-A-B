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
	  
		int j=0;
 	for(int i=0;i<n;){
 		if(abs(boys[i]-girls[j])<=1){ couple++; j++; i++;}
 		else if(boys[i]<girls[j]||j==(m-1))i++;
		else if(boys[i]>girls[j]) j++;
	 }
	  
	 
	cout<<couple<<endl;
	  
	
	
	
	
	
	return 0;
}
