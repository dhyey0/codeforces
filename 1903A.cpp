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
        int i,j,n,m;
        bool k=1;
        cin>>n>>m;
        vector<int>v(n);
        cin>>v[0];
        for(int i=1;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>=v[i-1]);
    
            else
            {
                k=0;
            }

        }
        if( m>=2 || k)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }  
    return 0;  
}

