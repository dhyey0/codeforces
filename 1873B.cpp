#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    long int testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        ll i,j,n;
        ll a=1;
        int k;
        cin>>n;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);

        }
        sort(v.begin(),v.end());
        if(v[0]==0)
        v[0]=1;
        else
        {
            (*(v.begin()))+=1;
        }
        for(i=0;i<v.size();i++)
        {
            a*=v[i];
        }
        cout<<a<<"\n";



        

    }   
    return 0;
}

