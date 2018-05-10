//		http://codeforces.com/problemset/problem/701/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
using namespace std ;
int main ()
{
	 std::ios::sync_with_stdio(false);	
	 int min,max,index,n,temp,temp2;
	 vector <int> vec,vec2;
	 vector <int> ::iterator iter;
	 
	 cin>>n;
	 
	 for(int i=0;i<n;i++)	
	 { cin>>temp;  vec.push_back(temp);	}	
	 
	 vector<int> pos(vec.begin(),vec.end());   //hold positions
	 
	
	while(vec.size()>0)
	{
		max=*max_element(vec.begin(),vec.end());
		min=*min_element(vec.begin(),vec.end());
		
		iter=find(vec.begin(),vec.end(),max);
		index=iter-vec.begin();
		vec.erase(vec.begin()+index);      //erase by index
		
		iter=find(vec.begin(),vec.end(),min);
		index=iter-vec.begin();
		vec.erase(vec.begin()+index);
		
		vec2.push_back(min);  
		vec2.push_back(max);
		// sequence will be like  ...( a1(min),a1(max) )  ,  ( a2(min),a2(max) )  ,  ( a3(min),a3(max) )   ,  ( a4(min),a4(max) )
	}

	
	for(int i=0;i<vec2.size();i+=2)
	{
		iter=find(pos.begin(),pos.end(),vec2[i]);  //search for max
		temp=iter-pos.begin();   pos[temp]=0;	   //to avoid duplicates	
		
		iter=find(pos.begin(),pos.end(),vec2[i+1]);	 //search for max
		temp2=iter-pos.begin();	 pos[temp2]=0;	     //to avoid duplicates	
		cout<<temp+1<<" "<<temp2+1<<endl;
		
	}




















	return 0;
}

