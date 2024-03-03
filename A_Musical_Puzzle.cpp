#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int i,j,k=0;
        int z;
        cin>>z;
        string s;
        cin>>s;
        map<pair<char,char>,int>m;
        m.insert(make_pair(make_pair(s[0],s[1]),1));
        for(j=1;j<z-1;j++)
        {
            if(m.find(make_pair(s[j],s[j+1]))==m.end())
            {
                m.insert(make_pair((make_pair(s[j],s[j+1])),1));
                k++;
            }
        }
        cout<<k+1<<"\n";
    }   
    return 0;
}

