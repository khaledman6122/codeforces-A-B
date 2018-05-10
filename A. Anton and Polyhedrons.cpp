//  http://codeforces.com/problemset/problem/785/A	 	//
#include <iostream>
#include <string>
#define endl "\n"
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int n,count=0;
    string shape;
    cin>>n;
    
    
    for(int i=0;i<n;i++){   
	cin>>shape;  
	if(shape=="Tetrahedron") count+=4;
	else if(shape=="Cube") count+=6;
	else if(shape=="Octahedron") count+=8;
	else if(shape=="Dodecahedron") count+=12;
	else if(shape=="Icosahedron") count+=20;
	 }
     
    cout<<count<<endl;
     
    
    
    
    
    
    
    
	return 0;
}

