/*
dhyey2907
CF905/3A
PS
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;

int main()
{
    ll  testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        int i=0,j;
        vector<int>v={1,2,3,4,5,6,7,8,9,0};
        int c=0;
        int x,n;
        cin>>n;
        int nodigi=3;
        while(nodigi>=0)
        {
            x=n/(int)(pow(10.0,nodigi));
            n%=(int)(pow(10.0,nodigi));
            if(x==v[i])
            c++;
            else if(v[i]==0 && x>0)
            {
                while(x !=v[i])
                {
                    i--;
                    c++;
                }
                c++;
            }
            else if(x!=0 && v[i]>x)
            {
                while(x!=v[i])
                {
                    c++;
                    i--;
                }
                c++;
            }
            else if(x!=0 && v[i]<x)
            {
                while(x!=v[i])
                {
                    c++;
                    i++;
                }
                c++;
            }
            else if(x==0 && v[i]!=0)
            {
                while(v[i]!=0)
                {
                    i++;
                    c++;
                }
                c++;
            }
            else if(x==v[i])
            {
                c++;
            }
            nodigi--;
        }
        cout<<c<<"\n";
    }  
    return 0;  
}

