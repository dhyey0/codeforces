/*
dhyey2907
CF905/3C
PS
*/
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
        int i,j,n,k,x;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(k,0);
        for(int c :a)
        {
            cin>>c;
            b[c%k]++;
        }
        if(b[0])
        x=0;
        else if(b[k-1] && k-1>=0&& k!=4)
        x=1;
        else if(b[k-2] && k-2>=0&& k!=4)
        x=2;
        else if(b[k-3] && k-3>=0&& k!=4)
        x=3;
        else if(b[k-4] && k-4>=0&& k!=4)
        x=4;
        else if(k==4 && b[2]>=2)
        x=0;
        else if(k==4 && b[2]==1 &&(b[3]||b[1]))
        x=1;
        else if(b[3] && k==4)
        x=1;
        else if(!(b[3])&&k==4 && b[1]>=2)
        x=2;
        else if(k==4 && b[2]==1)
        x=2;
        else if(k==4 && b[1]==1)
        x=3;
        cout<<x<<"\n";   
    }  
    return 0;  
}

