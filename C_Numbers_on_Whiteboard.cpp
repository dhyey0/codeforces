/*
TYPE    : READ EDITORIAL
CONTEST : ROUND XXX (DIV 2)
DATE    : 28/8/23
PROBLEM : X
DHYEY PATEL
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        //code starts here
        long long int i,j,n,m;
        cin>>n;
        vector<int>v(n);
        for(i=0;i<n;i++)
        v[i]=i+1;
        m=n;
        for(i=0;i<n-1;i++)
        {
            if(m==1)
            break;
            if(m>=3)
            {
            cout<<v[m-3]<<" "<<v[m-1]<<"\n";
           // v.pop_back();
            v.erase(v.begin()+m-4,v.begin()+m-3);
           v.pop_back();
            if(m-2 >=0 )
            v.push_back(v[m-2]);
            if(m-1 >=1)
            v.resize(m-1);
            if(m==1)
            break;
            m--;
            if(m==1)
            break ;
            }
            else
            cout<< v[2]<<" "<<v[0]<<"\n";
            v.erase(v.begin()+2,v.begin()+3);
            v.erase(v.begin(),v.begin()+1);

        }
        cout<<v[0]<<"\n";
        

    }   
    return 0;
}

