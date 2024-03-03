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
    ll  testcases;
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        int i,j,x,y;
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(i=1;i<=n-1;i++)
        {
            cin>>x>>y;
            v[x]++;
            v[y]++;

        }
        v[0]=-1;
        int f= count(v.begin(),v.end(),1);
        if(f%2==0)
        cout<<f/2<<"\n";
        else
        cout<<(f+1)/2<<"\n";




                
    }  
    return 0;  
}

