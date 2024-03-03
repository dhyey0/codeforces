/*
dhyey2907
CFXXX/XX
XX
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;

int main()
{
    int  testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        int i,j;
        cin>>i>>j;
        if(i!=j)
        cout<<max(i,j)<<"\n";
        else
        cout<<i<<"\n";
    }  
    return 0;  
}

