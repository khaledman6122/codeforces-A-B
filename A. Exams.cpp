//		http://codeforces.com/contest/194/problem/A		//
#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	
	int exam,mark;
	cin>>exam>>mark;	
	int vec[100]={0};

	
	for(int i=0;i<exam;i++)
	{
		if(mark>0)
		{
			vec[i]+=1;	mark--;
		}
		
		if(mark>0&&i==exam-1)
		i=-1;
	}
	
	int two=count(vec,vec+exam,2);
	
	cout<<two<<endl;
	
	
	
		
	return 0 ;
}



/*
//accepted
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	vector <int> vec(100,0);
	int exam,mark;
	cin>>exam>>mark;	
	
	for(int i=0;i<exam;i++)
	{
		if(mark>0)
		{
			vec[i]+=1;	mark--;
		}
		
		if(mark>0&&i==exam-1)
		i=-1;
	}
	
	int two=count(vec.begin(),vec.end(),2);
	
	cout<<two<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}







*/
