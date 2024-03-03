#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases=1;
   // cin>>testcases;
    while(testcases--)
    {
        //code starts here
        int i,j;
        unsigned long long int n,m,a,q=0,w=0;
        cin>>n>>m>>a;
        if(n<=a)    
        {
           q=1; 
        }
        else
        {
            if(n%a==0)
            q=n/a;
            else
            q=(n/a)+1;
        }
        if(m<=a)    
        {
            w=0; 
        }
        else
        {
            if((m-a)%a==0)
            w=(m-a)/a;
            else
            w=((m-a)/a)+1;
        }
        if(q==0)
        cout<<w<<"\n";
        else if(w==0)
        cout<<q<<"\n";
        else
        cout<<q+q*w<<"\n";
        

    }   
    return 0;
}

