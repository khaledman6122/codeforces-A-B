//		http://codeforces.com/contest/61/problem/A		//
#include <iostream>
#include <string>
using namespace std;
int main ()
{
	 string num1,num2,answer;
	 cin>>num1>>num2;
	 for(int i=0;i<num1.length();i++)
	{
		if(num1[i]=='1'&&num2[i]=='1')
		{
			answer+='0';
		}
		
		else if(num1[i]=='0'&&num2[i]=='0')
		{
			answer+='0';
		}
		else
		answer+='1';
		
	}
	
	
	
	cout<<answer<<endl;
	
	
	
	
	
	
	return 0 ;
}
