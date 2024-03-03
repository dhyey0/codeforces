#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        int q;
        cin>>q;
        while(q--)
        {
            int w,e,i,j,k=0;
            cin>>w>>e;
            vector<int>v(w*e);
            for(i=0;i<(w*e);i++)
            {
                cin>>v[i];
            }
            for(i=0;i<(w);i++)
            {
                for(j=0;j<e;j++)
                {
                    if(v[(i-1)*e+j]||v[(i+1)*e+j]||v[(i)*e+j-1]||v[((i)*e+j+1)]) 
                    {
                        k+=v[i*e+j];
                    }        
                } 
            }
            cout<<k<<"\n";
        }
    }   
    return 0;
}

