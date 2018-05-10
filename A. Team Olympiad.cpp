//		http://codeforces.com/contest/490/problem/A		//
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <numeric>
#define ll long long int 
using namespace std ;
int main ()
{
	vector <int> vone,vtwo,vthree;
	int n ,number,one=0,two=0,three=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>number;
		if(number==1)
		{ vone.push_back(i+1);	one ++;}
		else if(number==2)
		{ vtwo.push_back(i+1);	two ++;}
		else if(number==3)
		{ vthree.push_back(i+1);	three ++;}
	}
	  	if(one==0||two==0||three==0)	{cout<<0<<endl; return 0;}
	
	while(one>two||one>three)
	{
		one --;
		vone.erase(vone.begin());
	}
	while(two>one||two>three)
	{
		two --;
		vtwo.erase(vtwo.begin());
	}
	while(three>one||three>two)
	{
		three--;
		vthree.erase(vthree.begin());
	}
	
	
	n=one;  //n=two; n=three;   kolohom mtsawieen
	cout<<n<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<vone[i]<<" "<<vtwo[i]<<" "<<vthree[i]<<endl;
	}
	
	
	
	
	
	return 0 ;
}








//////////////////////////////////////////////////////////////////////////////////
// uncompletable solution need to be accepted
/*

	vector <int> vnumber,vindex;
	vector <int>::iterator iter;
	int n ,number,one=0,two=0,three=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>number;
			if(number==1)	one ++;
		else if(number==2)	two ++;
		else if(number==3)	three ++;
		vnumber.push_back(number);
		vindex.push_back(i+1);
		
	}
	  	if(one==0||two==0||three==0)	{cout<<0<<endl; return 0;}
	
	while(one>two||one>three)
	{
		one --;
		iter =find(vnumber.begin(),vnumber.end(),1);
		int x=vnumber.begin()-iter;   
		vnumber.erase(vnumber.begin()+x);
		vindex.erase(vindex.begin()+x);
	}
	while(two>one||two>three)
	{
		two --;
		iter =find(vnumber.begin(),vnumber.end(),2);
		int x=vnumber.begin()-iter;
		vnumber.erase(vnumber.begin()+x);
		vindex.erase(vindex.begin()+x);
	}
	while(three>one||three>two)
	{
		three--;
		iter =find(vnumber.begin(),vnumber.end(),3);
		int x=vnumber.begin()-iter;
		vnumber.erase(vnumber.begin()+x);
		vindex.erase(vindex.begin()+x);
	}
	cout<<"one = "<<one<<" two = "<<two<<" three= "<<three<<endl;
	
	vector<int> v1,v2,v3;
	
	for(int i=0;i<vindex.size();i++)
	{
		if(vnumber[i]==1)  v1.push_back(vindex[i]);
		if(vnumber[i]==2)  v2.push_back(vindex[i]);
		if(vnumber[i]==3)  v3.push_back(vindex[i]);
	}

			cout<<v1.size()<<endl;
		for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
		
	}
	
*/
