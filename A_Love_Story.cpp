#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc>>ws;
    while(tc--)
    {
        //code starts here
        int c=0;
        string s;
        cin>>s;
        if(s[0]!='c')
        c++;
        if(s[1]!='o')
        c++;
        if(s[2]!='d')
        c++;
        if(s[3]!='e')
        c++;
        if(s[4]!='f')
        c++;
        if(s[5]!='o')
        c++;
        if(s[6]!='r')
        c++;
        if(s[7]!='c')
        c++;
        if(s[8]!='e')
        c++;
        if(s[9]!='s')
        c++;
        cout<<c<<"\n";
    }   
    return 0;
}

