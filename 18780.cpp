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
        int i,j;
        int n,k;
        cin>>n>>k;
        unordered_set<int>s;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        if(s.find(k)==s.end())
        cout<<"NO\n";
        else
        cout<<"YES\n";        


        

    }   
    return 0;
}

