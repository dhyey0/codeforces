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
    ll  testcases;
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        int i,j=0,o=0,z=0,n;
        bool k=false;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<s.size()-1;i++)
        {
            if(s[i]!=s[i+1])
            {
                k=true;
                break;
            }
            if(s[i]=='1')
            o++;
            else
            z++;
        }
        if(s[s.size()-1]=='1')
        o++;
        else
        z++;
        if(k||(z>o))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }  
    return 0;  
}

