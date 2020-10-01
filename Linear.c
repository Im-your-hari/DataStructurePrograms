#include<stdio.h>

void main()
{
    int a[25],n,i,s,loc=-100;

    printf("Enter no.of elements :: ");
    scanf("%d",&n);
    printf("Enter elements...\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter element to be search :: ");
    scanf("%d",&s);
    
    for ( i = 0; i < n; i++)
    {
        if(a[i]==s)
        {
            loc=i;
        }
    }
    if(loc==-100){
        printf("Item not found");
    }
    else
    {
        printf("Item found at %d ",loc+1);
    }
    
    

    
}