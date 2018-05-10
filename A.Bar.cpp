//  	http://codeforces.com/problemset/problem/56/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{ 
	string temp,arr[]={ "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	int size=(sizeof(arr)/sizeof(string));
	vector <string> drinks(arr,arr+size);
//	for(int i=0;i<drinks.size();i++)cout<<drinks[i]<<" ";
	vector <int> check;
	
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		if((find(drinks.begin(),drinks.end(),temp)!=drinks.end())&&isalpha(temp[0]))
		check.push_back(i+1);
		else if(isdigit(temp[0]))
		{
			stringstream  inp;
			int age;
			inp<<temp;
			inp>>age;
			if(age<18)
			check.push_back(i+1);
		}
	}
	
	//for(int i=0;i<check.size();i++)cout<<check[i]<<" ";
	cout<<check.size()<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
