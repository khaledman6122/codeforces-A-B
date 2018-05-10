//   http://codeforces.com/problemset/problem/237/A       //
 //accepted
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
	std::ios::sync_with_stdio(false);
	stringstream inp;
	int n,arr[24][60]={0},h,m,sum=0;
	

	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>h>>m;
	 	arr[h][m]+=1;
			if(arr[h][m]>sum)
			sum=arr[h][m];	
			}
 	    
 	    cout<<sum<<endl;
	return 0 ;
}





/*
//wrong answer
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main ()
{
	std::ios::sync_with_stdio(false);
	stringstream inp;
	int n,temp1,temp2;
	string h,m;
	vector <string> tot;
	vector <int> cashes;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp1>>temp2;

		inp<<temp1;
		inp>>h;
		inp.clear();
	 
		inp<<temp2;
		inp>>m;
		inp.clear();
		 
		tot.push_back(h+m);	
		
		h.clear(),m.clear();
		
			
	}
 	    sort(tot.begin(),tot.end());
		vector <string> vec(tot.begin(),tot.end());
		sort(vec.begin(),vec.end());
		vec.erase(unique(vec.begin(),vec.end()),vec.end());
		for(int i=0;i<vec.size();i++)
		{
	    cashes.push_back(count(tot.begin(),tot.end(),vec[i]));	
		}
	sort(cashes.begin(),cashes.end());
	cashes.erase(unique(cashes.begin(),cashes.end()),cashes.end());
	int need=cashes[0],power=cashes[0];
	for(int i=1;i<cashes.size();i++)
	{
		
		need=cashes[i]-power;
		power+=need;
	}
	 
	cout<<power<<endl;
	

	return 0 ;
}

*/
