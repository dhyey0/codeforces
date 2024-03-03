#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,i,c=0,d=0;
        cin>>m;
        vector<int>a(m);
        for(i=0;i<m;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                c++;
                if(c>d)
                {
                    d=c;
                }
            }
            if(a[i]==1)
            {
                c=0;
            }
        }
        cout<<d<<"\n";
    }   
    return 0;
}

