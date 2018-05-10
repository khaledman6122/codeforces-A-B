//     http://codeforces.com/problemset/problem/313/A     //
#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
  int x,y=0,z=0;
  cin>>x;

  if(x>=0)	
 cout<<x<<endl;
  else
  {
    while(x%10!=0)
    {
    	x++,y--;
	}
   while(x%100!=0)
   {
   	x++,z--;
   }
  x=x/10;
  z=z/10;
  z=x+z;
  y=x+y;
cout<<max(y,z)<<endl;
}
	return 0 ;
}

/*
//  my answer after seeing ahmed dahy solution // 
#include <iostream>
#include <algorithm>
#include <string>
using namespace std ;
int main ()
{
	int size ;
	string s;
	cin>>s;
	size=s.length();
	if(s[0]!='-')
	cout<<s<<endl;
	else 
	{
		if(s[size-1]==s[size-2])
		s.erase(size-2,1);
	  // s.erase(size-1,1);
		
		else if(s[size-1]>s[size-2])
		s.erase(size-1,1);
		
		else if(s[size-1]<s[size-2])
		s.erase(size-2,1);
		
		if(s[1]=='0')
		cout<<0<<endl;
		
		else
        cout<<s<<endl;
	}
	







return 0 ;
}




























*/

/*
// Ahmed Dahy   facebook   //
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    if(s[0]!='-')
    {
        cout<<s<<endl;
    }
    else
    {
        long long x=s.size();
        if(s[x-1]>=s[x-2])
        {
            s.erase(x-1,1);
        }
        else
        {
            s.erase(x-2,1);
        }
        if(s[1]=='0') cout<<0<<endl;
        else
        cout<<s<<endl;

    }
    return 0;
}


*/









/*
// omar beshary  facebook modern academy // 
#include <bits/stdc++.h>
using namespace std;
int main(void)
{
  string s ,a , a1 , b1;
  int x , y ;
  cin >> a;
  s = a;
  int l = a.length() ;
  if (a[0] != '-') cout << a;
  else
  {   a1  = a.replace(l-1 , 1 ,"");
      b1  = s.replace(l-2 , 1 ,"");
      x = atoi(a1.c_str());
      y = atoi(b1.c_str());
      cout << max(x , y);
  }
}


*/


 
 
 /*
 
 
// third submission after seeing omar beshary solutin  //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	string a,b;
	cin>>a;
	b=a;
	if(a[0]!='-')
	cout<<a<<endl;
	else
	{
	
	int size=a.length();
    //atoi(a1.c_str());
   a.erase(size-1,1);  //last
   b.erase(size-2,1); //before lase
   int x,y;
   x=atoi(a.c_str());
   y=atoi(b.c_str());
   cout<<max(x,y)<<endl;

   }
	
	
	 
	
	return 0 ;
}



 */
