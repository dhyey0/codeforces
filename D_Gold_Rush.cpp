#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tc;
    cin>>tc;
    while(tc--)
    {
        int m,a=0,c=0,C=0;
        int k;
        cin>>m>>k;
        if(m==k)
        {
            cout<<"YES\n";
            continue;                       
        }
        if(m%3==0)
        {
            while(m>=3)
            {
                a++;
                m/=3;
                m*=2;
                if(m==k)
                {
                    C++;
                    break; 
                }
                else if(m/2==k)
                {
                    C++;
                    break;
                }
                else if(2*m==k)
                {
                    C++;
                    break;
                }
                else if((m/(pow(2,a)))==k)
                {
                    C++;
                    break;
                }
            
                else
                c++;
            }
            if(C)
            {
                cout<<"YES\n";
                continue;
            }
            else if(c)  
            {
                cout<<"NO\n";
                continue;   
            }
        }

        else
        cout<<"NO\n";
        
    }   
    return 0;
}

