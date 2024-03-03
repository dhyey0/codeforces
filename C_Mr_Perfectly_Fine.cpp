#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,t=0,b,a1=0,a2=0;
        cin>>m;
        string a;
        while(m--)
        {   
            if(a1==1 && a2==1)
            {
                exit;
            }
            cin>>b>>ws;
            cin>>a;
            if((a1!=1&&a[0]=='1')&&(a2!=1&&a[1]=='1'))
            {
            a1=1;
            a2=1;
            t+=b;
            }
            else if(a2!=1&&a[1]=='1')
            {
            a2=1;
            t+=b;
            }
            else if(a1!=1&&a[0]=='1')
            {
            a1=1;
            t+=b;
            }
        }
        if(a1==1 && a2==1)
        cout<<t<<"\n";
        else
        cout<<-1<<"\n";
    }   
    return 0;
}

