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
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        int n,k=0,j=0,i=0;
        long long int l,t;
        long long int p;

        cin>>n>>p>>l>>t;
        if(n>7)
        {
            if(n%7==0)
            k=n/7;
            else
            k=(n/7)+1;
        }
        
        else
        k=1;
        while(p>0)
        {
            if( k>0)
            {
                if(k>=2)
                p-=(2*t);
                else
                p-=t;
                k-=2;
                p-=l;
            }
            else
            p-=l;

            i++;
        }

        cout<<max(0,n-i)<<"\n";
       
    }  
    return 0;  
}
