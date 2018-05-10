//			http://codeforces.com/contest/711/problem/A		//
#include <iostream>
#include <vector>
#include <string>
#define endl "\n"
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
 	int n;
 	bool done=false;
 	vector <string> vec;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
 		string temp;
 		cin>>temp;
 		if(temp[0]=='O'&&temp[1]=='O'&&done==false)
		 {
		  done=true;
		  temp[0]='+', temp[1]='+';	
		 }	
 			
 		else if(temp[3]=='O'&&temp[4]=='O'&&done==false)
		 {
		  done=true;
		  temp[3]='+', temp[4]='+';	
		 }
	
		vec.push_back(temp);
	}
	
	
	if(done==true)
	{
		cout<<"YES"<<endl;
		for(int i=0;i<n;i++)
		cout<<vec[i]<<endl;
	}
	
	else
	cout<<"NO"<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
