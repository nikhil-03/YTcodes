#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[]={2,4,3,5,6,9,0,0,5,8,7};

    int n=sizeof(ar)/sizeof(ar[0]);

    cout<<n<<endl;


    // for(int i=0;i<6;i++)
    // {
    // 	ar[i]=i*5;
    // }


    // memset(ar,0,sizeof(ar));

    
    

    for(int i=0;i<n;i++)
    {
    	cout<<ar[i]<<" ";
    }

}



//   0    1    2     3      4      5
// ------------------------------------
// |  0  | 5   |   |     |      |      |
// ------------------------------------

