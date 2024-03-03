#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     int tc;
    scanf("%d%*c",&tc);
    while(tc--)
    {
        //code starts here
        char ch;
        ch=getchar();
        getchar();
        if(ch==99||ch==100||ch==101||ch==102||ch==111||ch==114||ch==115)
        {
        printf("\nYES");
        }
        else 
        {
        printf("\nNO"); 
        } 
    }   
    return 0;
}

