#include<bits/stdc++.h>
using namespace std;
int main()
{
	set< int > st;
	// int n;
	// cin>>n;
	// for(int i=0;i<n;i++)
	// {
	// 	int a;
	// 	cin>>a;
	// 	st.insert(a);
	// }
	// for(int a : st)
	// 	cout<<a<<endl;

    unordered_set<int> st2;
    int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		st2.insert(a);
	}
	for(int a : st2)
		cout<<a<<endl;

}