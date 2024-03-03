/*
TYPE    : CIRCULAR QUEUE TYPE QUESTION DONE WITH VEC
          TRAVERSING THROUGH LOOP OF NO.S
CONTEST : ROUND 197 (DIV 2)
DATE    : 28/8/23
PROBLEM : 1
DHYEY PATEL
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int testcases=1;
    //cin>>testcases;
    while(testcases--)
    {
        //code starts here
        long long int i,j,n,m,ct=0;
        cin>>n>>m;
        vector<int>v1(n);
        vector<int>v2(m);
        for(i=0;i<m;i++)
        cin>>v2[i];
        for(i=0;i<n;i++)
        v1[i]=i+1;
        for(i=0;i<m;i++)
        {
            if(i==0)
            ct+=v2[i]-1;
            
            else if(v2[i]>=v2[i-1])
            ct+=(v2[i]-v2[i-1]);
            else 
            ct+=n-(-v2[i]+v2[i-1]);
        }
        cout<<ct<<"\n";




    }   
    return 0;
}

