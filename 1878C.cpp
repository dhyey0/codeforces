#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int  ll;

int main()
{
    ll  testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        ll  i,j,n,k,x;
        cin>>n>>k>>x;
        ll d= n-k;
        ll s2=( d*(d+1))/2;
        ll s1= (n*(n+1))/2;
        if((((k*(k+1))/2)<=x)  && ((s1-s2)>=x))
        cout<<"YES\n";
        else
        cout<<"NO\n";

        

    }   
    return 0;
}

