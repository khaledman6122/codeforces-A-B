//http://codeforces.com/contest/514/problem/A//
#include <iostream>
#include <string>
#include <sstream>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string num,result,temp;
	stringstream  inp;
	cin>>num;
	for(int i=0;i<num.length();i++)
	{
		int x=num[i]-'0';
		
		if((9-x)<x)
		{
		inp<<(9-x);
		inp>>temp;
		inp.clear();
		result+=temp;
		//temp.clear();	
		}
		else
		result+=num[i];		
	}
	
	if(result[0]=='0'&&num[0]!='0')
	result[0]=num[0];
	
	
	cout<<result<<endl;
	
	
	
	
	
	
	
	
	
	return 0 ;
}
