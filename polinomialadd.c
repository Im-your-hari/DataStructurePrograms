#include <stdio.h>
void main()
{
    int f[10],s[10],a[10],n,i,j,k;
    printf("Enter the order :: ");
    scanf("%d",&n);
    printf("Enter first polinomial coefficients...\n");
    for (i = 0; i <= n; i++)
    {
        printf("Enter %dth coefficient :: ",n-i);
        scanf("%d",&f[i]);
    }
    printf("Enter second polinomial coefficients...\n");
    for (i = 0; i <= n; i++)
    {
        printf("Enter %dth coefficient :: ",n-i);
        scanf("%d",&s[i]);
    }
    for ( i = 0; i <=n; i++)
    {
        a[i]=f[i]+s[i];
    }
    


    printf("The sum of given polinomial is ...\n");
    if (a[0]!=0)
    {
        printf("%dx^%d",a[0],n);
    }
    
    for(i=1;i<=n;i++)
    {
        j=n-i;
        if (a[i]>1)
        {
            if (j==1)
            {
                printf("+%dx",a[i]);
            }
            
            else
            {
                 printf("+%dx^%d",a[i],j);
            }
        }
        
        else if(a[i]<0)
        {
            if (j==1)
            {
                printf("%dx",a[i]);
            }
            else if (j==0)
            {
                printf("%d",a[i]);
            }
            else
            {
                printf("%dx^%d",a[i],j);
            }
        }
        else if (a[i]==1)
        {
            if (j>0)
            {
                printf("+x^%d",j);
            }
            else
            {
                printf("+%d",a[i]);
            }
                           
        }
           
    }
}