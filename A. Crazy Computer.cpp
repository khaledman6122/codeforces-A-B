//	http://codeforces.com/problemset/problem/716/A	 	//
#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int n,word=1,b,a,c;
    vector<int> vec;
    cin>>n>>c;
    
    if(n==1){int temp; cin>>temp;  cout<<1<<endl;}
    else{
    for(int i=0;i<n;i++){int temp; cin>>temp; vec.push_back(temp); }
    for(int i=0;i<vec.size()-1;i++){
    	a=vec[i],b=vec[i+1];
    	if((b-a)<=c) word++;
    	else word=1;
	}
    cout<<word<<endl;
    }
    
    
    
    
    
    
    
	return 0;
}

