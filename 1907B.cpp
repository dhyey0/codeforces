/*
dhyey2907
CFXXX/XX
XX
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{   int testcases;
    cin>>testcases;
    while(testcases--)
    {
       
        //code starts here
        int a1=0,a2=0,i;
        string s;
        cin>>ws>>s;
        string a="";
        reverse(s.begin(),s.end());
        for( i=0;i<(s.length());i++)
        {
            if((s[i]!='b' && s[i]!='B'))
            {
                if(s[i]>='a'&& s[i]<='z')
                {
                    if(a1)
                    {
                        a1--;
                        continue;
                    }
                    else
                    {
                    a+=s[i];
                    }
                }
                if(s[i]>='A' && s[i]<='Z')
                {
                    if(a2)
                    {
                        a2--;
                        continue;
                    }
                    else
                    {
                    a+=s[i];
                    }
                }
            }
            else if(s[i]=='b')
            {
                a1+=1;
            }
            else if(s[i]=='B')
            {
                a2+=1;
            }
        }
        reverse(a.begin(),a.end());
        cout<<a<<"\n";
      
    }  
    return 0;  
}

