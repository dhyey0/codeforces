/*
dhyey2907
CF905/3B
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
        int i,j,n,k,b=0,r=0,nr=0;
        bool y=0;
        string s;
        cin>>n>>k>>ws>>s;
        map<char,int>a;
        for(i=0;i<s.size();i++)
        {
           auto q= a.find(s[i]);
           if(q != a.end())
           {
                a[s[i]]++;
           }
           else
           {
                a.insert({s[i],1});
           }
            
        }
        
        auto it=a.begin();
        for(pair<char,int>p : a)
        {
            if((p.second) %2 != 0)
            r++;
        }

        int x=a.size();
        if((n-k)%2==0)
        {
            if(k>=r)
            {
                if((k-r) %2 == 0)
                y=1;
            }

        }
        else if((n-k)%2!=0)
        {
            if(k+1>=(r))
            {
                if((k-r) %2 != 0)
                y=1;
            }
            
        }
        if(n-k==0||n-k==1)
        y=1;
        if(y)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }  
    return 0;  
}

