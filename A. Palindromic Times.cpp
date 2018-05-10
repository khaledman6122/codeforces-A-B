//		http://codeforces.com/problemset/problem/108/A		//
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std ;
int main ()
{
	stringstream inp;
	
	int hh=0,mm=0;
	string line,ph,pm,temp;
	cin>>line;
	
	temp+=line[0];
	temp+=line[1];
	inp<<temp;
	inp>>hh;
	
	temp.clear();
	inp.clear();
	
	temp+=line[3];
	temp+=line[4]; 
	inp<<temp;
	inp>>mm;
	
	//cout<<hh<<"  "<<mm;
	while(true)
	{
		mm++;
		//cout<<"mm = "<<mm<<" hh = "<<hh<<endl;
		if(mm==59||mm==60)  {mm=0;  hh++;}
		if(mm<10)	pm="0";
		if(hh==24)  hh=0;		
		if(hh<10)   ph="0";
		
		inp.clear();
		temp.clear();
		inp<<mm;
		inp>>temp;
		pm+=temp;
		
		inp.clear();
		temp.clear();
		inp<<hh;
		inp>>temp;
		ph+=temp;
		
		reverse(pm.begin(),pm.end());
		if(ph==pm)
		{
			reverse(pm.begin(),pm.end());
			cout<<ph<<":"<<pm<<endl;
			break;
		}
		else
		{
			ph.clear(), pm.clear() ,  temp.clear() ,inp.clear() ; 
		}
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}

