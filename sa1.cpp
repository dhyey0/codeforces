#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        //code starts here
        int m,z=0,a1=0,a2=0,i,T=-1,q=0,w=0,j=0;
        cin>>m;
        int t[m];
        vector<int>t1,t2,k;
        for(i=0;i<m;i++)
        {
            string a;
            cin>>t[i];
            getchar();
            getline(cin,a);
            if(a[1]=='1'&&a[0]=='1')
            {
                k.push_back(t[i]);
                a1=1;
                a2=1;
                j++;
            }
            else if(a[1]=='1'&&a[0]=='0')
            {
                t2.push_back(t[i]);
                a2=1;
                q++;
            }
            else if(a[1]=='0'&&a[0]=='1')
            {
                t1.push_back(t[i]);
                a1=1;
                w++;
            }
            else
            continue;
        }
        int e=2000,r=2000;
        
        if(a1==1 && a2==1)
        {   
            if(q&&w&&j)
            {
            e=*min_element(t1.begin(),t1.end());
            r=*min_element(t2.begin(),t2.end());
            z=e+r;
            
            if(z<*(min_element(k.begin(),k.end())))
            {
                T=z;
            }
            else 
            T=*(min_element(k.begin(),k.end()));
            }
            else if(j)
            {
                T=*(min_element(k.begin(),k.end()));
            }
            else if(q&&w)
            {
            e=*min_element(t1.begin(),t1.end());
            r=*min_element(t2.begin(),t2.end());
            z=e+r;
                T=z;
            }
            
        }
        cout<<T<<"\n";
    }   
    return 0;
}

