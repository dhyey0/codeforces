#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int  ll;
ll fun(ll a, ll b)
{
    ll c=a+b+1;
    if(c%3==0)
    return c+1 ;
    else 
    return c;
}
int main()
{
    ll  testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        ll i,j,n;
        cin>>n;
        vector<ll>v(n);
        v[0]=4;
        v[1]=6;
        for(i=2;i<n;i++)
        {
            v[i]=fun(v[i-1],v[i-2]);
        }
        for(ll x :v)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
        
        

    }   
    return 0;
}

