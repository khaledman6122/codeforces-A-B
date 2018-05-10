//         http://codeforces.com/problemset/problem/271/A    //
#include <iostream>
using namespace std; 
bool compare(int x)
{
	bool check =true ;
	int cx=0,i=0,arr[10]={0};
	while (x!=0)
	{
		while(x%10==0)
		{
			arr[i]=0,i++;
			x/=10;
		}
		while(x%10!=0)
		{
			x--;
			cx++;
		}
		if(cx!=0)
		{
		arr[i]=cx,i++;
		cx=0;
		if(x%10==0)
		x/=10;

		//  x/=10;     the bug is you cannot divide by zero  5/0=math error   and 0/5 infinite loop
		}
	 
	}
	
//	for(int k=0;k<i;k++) cout<<arr[k]<<" ";
//	cout<<endl;
	for(int k=0;k<i-1;k++)
	{
		for(int j=k+1;j<i;j++)
		{
			if(arr[k]==arr[j])
			{
				check=false;
				break; 
			}
		}
	}
	
 	if(check==true)
	return true ;	

	else 		
	return false ;
	
}

int main ()
{
	
	int n;
	cin>>n;
	while(true)
	{
		n++;
		if(compare(n))
		{
			cout<<n<<endl;
			break ;
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
