//		http://codeforces.com/contest/88/problem/A		//
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	 
	string note,line,a,b,c,arr[]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};
	int x,y,z,temp1,temp2,counter=0;
	int size=sizeof(arr)/sizeof(string);
	vector<string> vec(arr,arr+size);
	vector <string> ::iterator iter;
	
	cin>>a>>b>>c;

	iter=find(vec.begin(),vec.end(),a);
	x=(iter-vec.begin()) +1;
	
	iter=find(vec.begin(),vec.end(),b);
	y=(iter-vec.begin()) +1;
	
	iter=find(vec.begin(),vec.end(),c);
	z=(iter-vec.begin()) +1;
	
	vector <int> vec2;
	vec2.push_back(x);	vec2.push_back(y);	vec2.push_back(z);	
	sort(vec2.begin(),vec2.end());
	do{
		temp1=0,temp2=0;		
	    x=vec2[0], y=vec2[1]	, z=vec2[2] ; 
		
		if(x<y)
		temp1=y-x;
		else
		{
			temp1=12-x;	temp1++;	temp1+=(y-1);
		}
		
		if(y<z)
		temp2=z-y;	
		else
		{
			temp2=12-y;	temp2++; 	temp2+=(z-1);
		}
		
		
		if(temp1==3&&temp2==4)
		{ cout<<"minor"<<endl;	return 0 ; }
		else if(temp1==4&&temp2==3)
		{ cout<<"major"<<endl;	return 0 ;	}
	
		
	}while(next_permutation(vec2.begin(),vec2.end()));
	
	
	cout<<"strange"<<endl;
	
	
	
	
	return 0 ;
}
