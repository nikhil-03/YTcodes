#include<bits/stdc++.h>
using namespace std;
int main()
{
	// map
    // map< key , value> mp;

    map<string , int> mp;

    mp["onion"]=20;
    mp["potato"]=35;


    int sum;

    sum=mp["onion"]*2 + mp["potato"]*3;




    // cout<<sum;





	//unordered map

	unordered_map<char , int > m2;
	// map<char , int > m2;

	m2['a']=10;
    m2['k']=52;
    m2['c']=25;

      for(auto a : m2)
      {
      	 cout<<a.first<<" "<<a.second<<endl;
      }

}