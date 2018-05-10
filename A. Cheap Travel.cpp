//		http://codeforces.com/problemset/problem/466/A		//
#include <iostream>
using namespace std ;
int main ()
{
	
	int n=0,m=0,a=0,b=0,x=0,y=0,z=0,price1=0,price2=0;
	cin>>n>>m>>a>>b;
	price1=n*a;
	
	if(n%m!=0)
	{
		x=(n%m)*a;
		if(m>=(n%m))
		{
			y=b;
		}
		else if(m<(n%m))
		{
		z=n%m;	
		y=((z)+(z/m))*b;		
		}		
		
		if(y<=x) price2+=y;	
		else	 price2+=x;
	}
	
	price2+=(n/m)*b;
	
	if(price1<=price2) cout<<price1<<endl;
	else			   cout<<price2<<endl;
	
	
	
	
	
	return 0 ;
}


/*
// problem setter solution
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, m, a, b;
    
    cin >> n >> m >> a >> b;
    if (m * a <= b)
        cout << n * a << "\n";
    else 
        cout << (n/m) * b + min((n%m) * a, b) << "\n";

    return 0;
}



*/







/*
//  wrong answer 
int n,m,a,b,counter=0,ticketB=0;
	double avgB=0;
	cin>>n>>m>>a>>b;
	avgB=b/m;
	if(avgB<a)
	{
		while(true)
		{
			if(n>=m)
			{
				n-=m; 
				ticketB++;
			}
			else break ;
			
			
		}
	
	}
	
	if((ticketB*b)+(n*a)  > (ticketB*b)+(n*b) )
	cout<<(ticketB*b)+(n*b)<<endl;
	else
	cout<<(ticketB*b)+(n*a)<<endl;

*/
