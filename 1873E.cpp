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
        ll n,x,i,j,h,vo=0;
        cin>>n>>x;
        vector<ll>v(n);
        set<ll>s;
        for(i=0;i<n;i++)
        {
            long long int  qq;
            cin>>qq;
            v.push_back(qq);
            s.insert(qq);
        }
        h=(*s.begin());
        while(vo<=x)
        {   
            vo=0;
            for(i=0;i<n;i++)
            {
                if(v[i]<h)
                {
                    vo+=(h-v[i]);
                }
            }



            h++;
        }
        h+=1;
        cout<<h<<"\n";

        

    }   
    return 0;
}

