#include <stdio.h>
void main()
{
    int a[25],i,n,s,min,max,mid;

    printf("Enter no.of elements :: ");
    scanf("%d",&n);
    printf("\nEnter the array elements in ascending order...\n");

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    
    }
    
    printf("Enter the item to be search :: ");
    scanf("%d",&s);
    
    min=0;
    max=n-1;            
    mid=(min+max)/2;    

    while (min<max)
    {
        if(a[mid]<s){
            min=mid+1;
        }
        else if(a[mid]==s){
            printf("Item found at %d",mid+1);
            break;
        }
        else
        {
            max=mid-1;
        }
        mid=(min+max)/2;
    }

    if (min>max)
    {
        printf("Item not found...!");
    }
    
}