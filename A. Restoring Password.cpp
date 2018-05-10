//		http://codeforces.com/problemset/problem/94/A		//
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std ;
int main ()
{
	vector <string> vec;
	vector <string> ::iterator iter;
	string line,temp,result;
	stringstream inp ;
	int cnt=0;
	cin>>line;
	for(int i=0;i<11;i++)
	{
		cin>>temp;
		vec.push_back(temp);
	}
	temp.clear();
	for(int i=0;i<line.length();i++)
	{
	  cnt++;	temp+=line[i];	
	  if(cnt==10)
	  {
	  	
	  	iter=find(vec.begin(),vec.end(),temp);
	  	if(iter!=vec.end())
	  	{
	  	 cnt=iter-vec.begin();
		 temp.clear();
		 inp<<cnt;
		 inp>>temp;
		 result+=temp;
		 inp.clear(); 
		 cnt=0; temp.clear(); 	
		}
	  	
	  }
		
	}
	
	cout<<result<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
