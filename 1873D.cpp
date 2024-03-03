#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;

int main()
{
    int  testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        int i,j;
        ll n,k,c=0;
        cin>>n>>k>>ws;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='B')
            {
                c++;
                for(j=i;    (j<i+k)  &&  (j<s.size())    ;j++)
                {
                    if(s[j]!='W')
                    s[j]='W';
                }
            }
        }
        cout<<c<<"\n";



        

    }   
    return 0;
}

