#include <stdio.h>
void main()
{
    int a[10],n,i,j;
    printf("Enter the order :: ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
        printf("Enter %dth coefficient :: ",n-i);
        scanf("%d",&a[i]);
    }
    printf("The polinomial is ...\n");
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