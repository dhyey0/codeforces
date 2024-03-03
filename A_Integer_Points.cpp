#include<bits/stdc++.h> 
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        unsigned long long int m,m1=0,i,c1=0,c2=0,d1=0,d2=0;

        cin>>m;

        vector<int>v(m);
        for(i=0;i<m;i++)
        {
        cin>>v[i];
        if(v[i]%2==0)
        c2++;
        else
        c1++;
        }

        cin>>m1;

        vector<int>v1(m1);
        for(i=0;i<m1;i++)
        {
        cin>>v1[i];
        if(v1[i]%2==0)
        d2++;
        else
        d1++;
        }
        cout<<c1*d1+c2*d2<<"\n";
    }   
    return 0;
}

