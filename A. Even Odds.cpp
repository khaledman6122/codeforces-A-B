//		http://codeforces.com/problemset/problem/318/A		//
#include <iostream>
#include <bits/stdc++.h>
#define ll  long long
using namespace std ;
int main()
{

	ll number,index,formula;
	
	cin>>number>>index;
	
	if(index==1) {cout<<1<<endl;	return 0 ;}
	
	if(number%2!=0)
	number ++;
	
	if(index>1&&index<=(number/2))
	{
		formula=(2*(index-1))+1;
	}
	else if(index>(number/2))
	{
		index=index-(number/2);
		formula=(2*(index-1))+2;
	}
	
		cout<<formula<<endl;
	
	return 0 ;
}

/*
By mohamed_salama, contest: Codeforces Round #188 (Div. 2), problem: (A) Even Odds, Accepted, #
 #include <iostream>

using namespace std;

int main()
{
    long long x ,y  , l ;
    cin>>x>>y ;
    if(y<=x/2+x%2){
        l = 1+(y-1)*2 ;
    }
    else{
        l=(y-x/2-x%2)*2 ;
    }
    cout<<l<<endl ;
    return 0;
}


*/


//////////////////////////////////////////////////////////////////////////
/*

By MohamedZain, contest: Codeforces Round #188 (Div. 2), problem: (A) Even Odds, Accepted, #
 #include <iostream>

using namespace std;

int main()
{
  long long n, k;
  cin >> n >> k;
  if(n%2) n++;
  if(k > n/2) cout << 2*k - n << endl;
  else cout << 2*k - 1 << endl;
  return 0;
}

*/

////////////////////////////////////////////////////////////////
/*
By YoussefKayyali, contest: Codeforces Round #188 (Div. 2), problem: (A) Even Odds, Accepted, #
 #include <iostream>

using namespace std;

int main()
{
    unsigned long long x,y;
    cin>>x>>y;
    if (x%2==1) {x++;}

    if (y>x/2) {cout<<(y-x/2)*2<<endl;}
    else {cout<<y*2-1<<endl;}
    return 0;
}
*/
