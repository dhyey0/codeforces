#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        int i,j;
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        int c[n];
        int d[n];
        map<int,int> r;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            d[i]=b[i];
            if(r.find(b[i])==r.end())
            {
                r.insert(make_pair(b[i],1));
            }
            else
                r[b[i]]++;
        }
        sort(b,b+n);
        map<int,int> z;
        for(i=0;i<n;i++)
        {
            z.insert(make_pair(a[i],b[i]));
        }
        for(i=0;i<n;i++)
        {
            if(i>0 && a[i]==a[i-1])
            {
                d[i]=z[c[i+1]];
            }
            else
            {
                d[i]=z[c[i]];
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<d[i]<<" ";
        }
        cout<<"\n";
    }   
    return 0;
}
