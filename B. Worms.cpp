//		http://codeforces.com/problemset/problem/474/B		//
#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
int main(){
	
	std::ios::sync_with_stdio(false);
	vector<pair<int,int> >vec;
	int n,m,a,q,last;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(i==0){
			vec.push_back(make_pair(1,a)); last=a+1;
		}
		else{ vec.push_back(make_pair(last,(a+last-1))); last+=a; }
	}
	//for(int i=0;i<vec.size();i++)cout<<vec[i].first<<" "<<vec[i].second<<endl;
	
	cin>>m;

	for(int i=0;i<m;i++)
	{
		int lower=0,upper=vec.size()-1;
		cin>>q;
		while(true){
			int mid=(lower+upper)/2;
	   	if(vec[mid].first<=q&&vec[mid].second>=q){ cout<<mid+1<<endl;	break; }					
		else if(vec[mid].first>q&&vec[mid].second>q)	upper=mid-1; 
		else if(vec[mid].first<q&&vec[mid].second<q)	lower=mid+1; 
		//if(lower>=upper) break; //no need for this because q will always be in vec
		}
		
	}
	
	
	
	 
	
	
	 
	
	return 0 ;
}
