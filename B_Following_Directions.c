#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        //code starts here
        int l,i=0,m=0;
        scanf("%d",&l);
        getchar();
        char a[l];
        int h=0,v=0;
        gets(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='R')
            {
                h++;
            }
            if(a[i]=='L')
            {
                h--;
            }
            if(a[i]=='U')
            {
                v++;
            }
            if(a[i]=='D')
            {
                v--;
            }
            if(v==1&&h==1)
            {
                m+=1;
            }
        }
        if(m!=0)
        {
            printf("\nYES");
        }
        else
            printf("\nNO");  
    }   
    return 0;
}

