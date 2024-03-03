#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll  testcases;
    cin>>testcases>>ws;
    while(testcases--)
    {
        //code starts here
        int i,j;
        int c=0;
        string v[10];
        for(i=0;i<10;i++)
        {
            cin>>ws>>v[i];
        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if((i==0||i==9||j==0||j==9)&&v[i][j]=='X')
                c++;
                else if((i==1||i==8||j==1||j==8)&&v[i][j]=='X')
                c+=2;
                else if((i==2||i==7||j==2||j==7)&&v[i][j]=='X')
                c+=3;
                else if((i==3||j==6||j==3||i==6)&&v[i][j]=='X')
                c+=4;
                else if((i==4||j==5||j==4||i==5)&&v[i][j]=='X')
                c+=5;


            }



















































           /* if(v[i][0]=='X')
            {
            c+=1;
            //continue;
            }
            if(v[i][9]=='X')
            {
            c+=1;
           // continue;
            }
            if(v[i][1]=='X')
            {
            c+=2;
          //  continue;
            }
            if(v[i][8]=='X')
            {
            c+=2;
          //  continue;
            }
            if(v[i][2]=='X')
            {
            c+=3;
          //  continue;
            }
            if(v[i][7]=='X')
            {
            c+=3;
           // continue;}
            }
            if(v[i][3]=='X')
            {
            c+=4;
            //continue;
            }
            if(v[i][6]=='X')
            {
            c+=4;
           // continue;
            }
            if(v[i][4]=='X')
            {
            c+=5;
//continue;
            }
            if(v[i][5]=='X')
            {
            c+=4;
            }
           // continue;}
*/


        }
        cout<<c<<"\n";
        

    }   
    return 0;
}


