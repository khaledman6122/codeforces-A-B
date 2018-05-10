//   http://codeforces.com/problemset/problem/300/A   //
#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
    typedef vector<int> vi ;
	typedef vector<int> ::iterator it ;

	vi vnegative,vpositive,vzero;
	int neg=0,pos=0,zero=0,n,x;
    cin>>n;
    for(int i=0;i<n;i++)
	{
    	cin>>x;
    	if(x<0) { vnegative.push_back(x); neg++; }
	    else if(x>0) { vpositive.push_back(x); pos++; }
	    else { vzero.push_back(x); zero++; }
	}
    if(neg%2!=0)  //odd
    {
    	if(pos==0)
    	{
    		
    		vpositive.push_back(vnegative[neg-1]);
			vpositive.push_back(vnegative[neg-2]);
    		
    		vnegative.resize(neg-2);
		}
	}
    
    else if(neg%2==0)  //even
    {
    	if(pos==0)
    	{
    		
    		vpositive.push_back(vnegative[neg-1]);
			vpositive.push_back(vnegative[neg-2]);
			
			
		    vzero.push_back(vnegative[neg-3]);
    		vnegative.resize(neg-3);
		}
		else
		{
			 vzero.push_back(vnegative[neg-1]);
			 vnegative.resize(vnegative.size()-1);
		}
	}

     
    
	cout<<vnegative.size()<<" ";
    if(vnegative.size()==1)
    cout<<vnegative[0]<<endl;
    else
    {
    	    
	for(int i=0;i<vnegative.size()-1;i++)
    cout<<vnegative[i]<<" ";
    cout<<vnegative[vnegative.size()-1]<<endl;
	}
 	 
 	 cout<<vpositive.size()<<" ";
    if(vpositive.size()==1)
    cout<<vpositive[0]<<endl;
    else
    {
    	    
	for(int i=0;i<vpositive.size()-1;i++)
    cout<<vpositive[i]<<" ";
    cout<<vpositive[vpositive.size()-1]<<endl;
	}
 	 
    cout<<vzero.size()<<" ";
    if(vzero.size()==1)
    cout<<vzero[0]<<endl;
    else
    {
    	    
	for(int i=0;i<vzero.size()-1;i++)
    cout<<vzero[i]<<" ";
    cout<<vzero[vzero.size()-1]<<endl;
	}
	

	
	
	

	return 0 ;
	}	
