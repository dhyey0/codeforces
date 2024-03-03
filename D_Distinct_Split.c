#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    long long int tc;
    scanf("%164d",&tc);
    while(tc--)
    {
        //code starts here
        int l,i,j,q=0,U=0,S=0,k=0,F=0,ans=0;
        scanf("%d",&l);
        getchar();
        char a[l+1],u[l+1],s[l],f[l];
        gets(a);
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                if(a[i]!=a[j])
                {
                    q++;
                }
                else 
                break;
            }
            if(q==l)
            {
                u[U]=a[i];
                U++;
            }
            else
            {
                s[S]=a[i];
                S++;
            }


        }
        for(i=0;i<S;i++)
        {
            int q=0;
            for(j=0;j<i;j++)
            {
                if(s[i]!=s[j])
                q++;
                
            }
            if(q==j)
            {
                f[F]=s[i];
                F++;
            }
        }
        char f1[F];
        strcpy(f1,f);
        int fr[F-1],nn=0;
        for(i=0;i<F;i++)
        {
            for(j=0;j<F;j++)
            {
                if(f[i]==f1[j])
                {
                    fr[nn]++;
                    f1[j]='0';
                }

            }
            nn++;
        }
        ans=U+nn;
        for(i=nn-1;i>=0;i--)
        {
            
        }
        printf("\n%d",ans);
    }   
    return 0;
}

