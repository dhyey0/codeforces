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
        int l,m=0;
        scanf("%d",&l);
        char a[l];
        getchar();
        gets(a);
        while(1)
        {
        if((a[0+m]=='0'&&a[l-1-m]=='1')||(a[0+m]=='1'&&a[l-1-m]=='0'))   
        {
            m++;
        }
        else

        break;
        }
        if(l-2*m>0)
        printf("\n%d",l-2*m);
        else 
        printf("\n%d",0);
    }   
    return 0;
}

