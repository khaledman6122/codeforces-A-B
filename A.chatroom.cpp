#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	int  counter =0 ,j=0;
	string arr="hello";
	string word;
	cin>>word;
	for(int i=0;i<word.length();i++)
	{
		if(word[i]==arr[j])
		{
			counter ++ ;
			j ++ ;
	}
	}
	
	
	
//	cout<<counter<<endl;
	if(counter==5)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	
	
	return   0 ;
}
