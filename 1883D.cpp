/*
dhyey2907
CF905/3D
PX
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;

int main()
{
    multiset<pair<int,int>>s;
    ll  testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        int k=0;
        int x,y;
        char c;
        cin>>c;
        cin>>x>>y>>ws;
        if(c=='+')
        {
            s.insert({x,y});

        }
        else if(c=='-')
        {
           auto it= s.find({x,y});
           s.erase(it);
        }
        for(auto it=s.begin();it!=s.end();it++)
        {
            auto it2=it;
            it2++;
            for(auto it1=it2;it1!=s.end();it1++)
            {
                if(((it->first)<=(it1->first)<=(it->second))||((it1->first)<=(it->first)<=(it1->second)))
                {

                }
                else
                k++;
                
            }
        }
        if(k)
        cout<<"YES\n";
        else
        cout<<"NO\n";

        
    }  
    return 0;  
}

